
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100023600(L2CValue *param_1,void *param_2)

{
  byte bVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  int iVar4;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_2 + 200),9);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MIISWORDSMAN_STATUS_KIND_SPECIAL_S2_DASH);
  uVar3 = lib::L2CValue::operator==(pLVar2,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar3 & 1) != 0) {
    pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_2 + 200),0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar3 = lib::L2CValue::operator==(pLVar2,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) {
      bVar1 = app::lua_bind::GroundModule__is_status_cliff_impl
                        (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40));
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar3 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MIISWORDSMAN_STATUS_KIND_SPECIAL_S2_END);
        lib::L2CValue::L2CValue(aLStack128,true);
        lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x90,(L2CValue)0x80);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack112);
        iVar4 = 1;
        goto LAB_7100023734;
      }
    }
  }
  iVar4 = 0;
LAB_7100023734:
  lib::L2CValue::L2CValue(param_1,iVar4);
  return;
}

