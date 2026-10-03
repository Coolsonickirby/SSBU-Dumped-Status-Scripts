
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100032ca0(L2CValue *param_1,L2CValue *param_2)

{
  uint uVar1;
  ulong uVar2;
  bool bVar3;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  uVar1 = lib::L2CValue::as_integer(param_2);
  uVar1 = app::sv_battle_object::category(uVar1);
  lib::L2CValue::L2CValue(aLStack80,uVar1 & 0xff);
  lib::L2CValue::L2CValue(aLStack64,_BATTLE_OBJECT_CATEGORY_ITEM);
  uVar2 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar2 & 1) == 0) {
    uVar1 = lib::L2CValue::as_integer(param_2);
    uVar1 = app::sv_battle_object::kind(uVar1);
    lib::L2CValue::L2CValue(aLStack80,uVar1);
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_KIND_PICKEL_STONE);
    uVar2 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar2 & 1) != 0) {
      bVar3 = true;
      goto LAB_7100032d6c;
    }
  }
  bVar3 = false;
LAB_7100032d6c:
  lib::L2CValue::L2CValue(param_1,bVar3);
  return;
}

