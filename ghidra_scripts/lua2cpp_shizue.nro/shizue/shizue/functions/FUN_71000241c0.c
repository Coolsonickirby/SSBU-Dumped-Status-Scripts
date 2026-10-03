
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000241c0(L2CValue *param_1,L2CValue *param_2,L2CValue *param_3)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  bool bVar4;
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_BATTLE_OBJECT_CATEGORY_FIGHTER);
  uVar3 = lib::L2CValue::operator==(param_2,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_BATTLE_OBJECT_CATEGORY_ENEMY);
    uVar3 = lib::L2CValue::operator==(param_2,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_BATTLE_OBJECT_CATEGORY_ITEM);
      uVar3 = lib::L2CValue::operator==(param_2,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar3 & 1) == 0) {
        bVar4 = false;
      }
      else {
        uVar2 = lib::L2CValue::as_integer(param_3);
        bVar1 = app::sv_item::is_captured(uVar2);
        bVar4 = (bool)(bVar1 & 1);
      }
      goto LAB_7100024244;
    }
  }
  bVar4 = true;
LAB_7100024244:
  lib::L2CValue::L2CValue(param_1,bVar4);
  return;
}

