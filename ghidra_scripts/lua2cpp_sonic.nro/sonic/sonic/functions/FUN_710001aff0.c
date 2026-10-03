
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001aff0(L2CValue *param_1,long param_2)

{
  bool bVar1;
  byte bVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar5 = (L2CValue *)(param_2 + 200);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](pLVar5,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar4 = lib::L2CValue::operator==(pLVar3,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) != 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](pLVar5,0x20);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP_BUTTON);
    lib::L2CValue::operator&(pLVar3,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar1 & 1U) != 0) {
LAB_710001b0a0:
      bVar1 = true;
      goto LAB_710001b134;
    }
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar5,0x20);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP);
    lib::L2CValue::operator&(pLVar5,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::~L2CValue(aLStack96);
    }
    else {
      bVar2 = app::lua_bind::ControlModule__is_enable_flick_jump_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((bVar1 & 1U) != 0) goto LAB_710001b0a0;
    }
  }
  bVar1 = false;
LAB_710001b134:
  lib::L2CValue::L2CValue(param_1,bVar1);
  return;
}

