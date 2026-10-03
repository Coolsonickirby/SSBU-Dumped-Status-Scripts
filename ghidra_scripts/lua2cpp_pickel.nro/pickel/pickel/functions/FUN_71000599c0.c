
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000599c0(L2CValue *param_1,L2CValue *param_2)

{
  ulong uVar1;
  bool bVar2;
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PICKEL_MATERIAL_KIND_DIAMOND);
  uVar1 = lib::L2CValue::operator==(param_2,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar1 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PICKEL_MATERIAL_KIND_GOLD);
    uVar1 = lib::L2CValue::operator==(param_2,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar1 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PICKEL_MATERIAL_KIND_IRON);
      uVar1 = lib::L2CValue::operator==(param_2,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar1 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PICKEL_MATERIAL_KIND_STONE);
        uVar1 = lib::L2CValue::operator==(param_2,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar1 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PICKEL_MATERIAL_KIND_WOOD);
          uVar1 = lib::L2CValue::operator==(param_2,aLStack64);
          lib::L2CValue::~L2CValue(aLStack64);
          if ((uVar1 & 1) == 0) {
            bVar2 = false;
            goto LAB_7100059ac8;
          }
        }
      }
    }
  }
  bVar2 = true;
LAB_7100059ac8:
  lib::L2CValue::L2CValue(param_1,bVar2);
  return;
}

