
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100077fb0(L2CValue *param_1,L2CValue *param_2)

{
  ulong uVar1;
  bool bVar2;
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_DRAGON_BEAM_READY);
  uVar1 = lib::L2CValue::operator==(param_2,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar1 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_DRAGON_BEAM_START);
    uVar1 = lib::L2CValue::operator==(param_2,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar1 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_DRAGON_BEAM_SHOOT_LOOP);
      uVar1 = lib::L2CValue::operator==(param_2,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar1 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,_WEAPON_TANTAN_PUNCH1_STATUS_KIND_DRAGON_BEAM_END);
        uVar1 = lib::L2CValue::operator==(param_2,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar1 & 1) == 0) {
          bVar2 = false;
          goto LAB_710007808c;
        }
      }
    }
  }
  bVar2 = true;
LAB_710007808c:
  lib::L2CValue::L2CValue(param_1,bVar2);
  return;
}

