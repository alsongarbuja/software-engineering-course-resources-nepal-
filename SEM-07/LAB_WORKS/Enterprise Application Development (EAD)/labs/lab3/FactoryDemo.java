
/**
 * Building interface
 */
interface Building {
    void createBuilding();    
}

class Palace implements Building {
    public void createBuilding() {
        System.out.println("Creating a palace.....");
    }
}

class TentHouse implements Building {
    public void createBuilding() {
        System.out.println("Creating a tent house.....");
    }
}

class TreeHouse implements Building {
    public void createBuilding() {
        System.out.println("Creating a tree house.....");
    }
}

class BuildingFactory {
    public Building build(String typeOfBuilding) {
        if(typeOfBuilding.equalsIgnoreCase("PALACE")) {
            return new Palace();
        }
        if(typeOfBuilding.equalsIgnoreCase("TENT")) {
            return new TentHouse();
        }
        if(typeOfBuilding.equalsIgnoreCase("TREE")) {
            return new TreeHouse();
        }

        return null;
    }
}

public class FactoryDemo {
    public static void main(String[] args) {
        BuildingFactory buildingFactory = new BuildingFactory();

        Building palace = buildingFactory.build("PALACE");
        palace.createBuilding();

        Building treeHouse = buildingFactory.build("TREE");
        treeHouse.createBuilding();

        Building tentHouse = buildingFactory.build("TENT");
        tentHouse.createBuilding();
    }
}