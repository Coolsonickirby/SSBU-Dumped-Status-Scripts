
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterDemon::status::TurnDash_pre(L2CFighterDemon *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *pLVar2;
  BattleObjectModuleAccessor *pBVar3;
  ulong uVar4;
  float fVar5;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_TURN_DASH);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
  pBVar3 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar2);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  app::FighterSpecializer_Demon::update_opponent_lr_1on1(pBVar3,iVar1);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue
            (aLStack80,_FIGHTER_SPECIAL_COMMAND_USER_INSTANCE_WORK_ID_FLOAT_OPPONENT_LR_1ON1);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack112,fVar5);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  uVar4 = lib::L2CValue::operator__(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    fVar5 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,fVar5);
    uVar4 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) != 0) {
      pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
      lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_TURN);
      uVar4 = lib::L2CValue::operator__(pLVar2,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RYU_STATUS_KIND_DASH_BACK);
        iVar1 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::StatusModule__set_status_kind_interrupt_impl(this->moduleAccessor,iVar1);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        goto LAB_71000482d8;
      }
    }
  }
  lua2cpp::L2CFighterCommon::status_pre_TurnDash(this);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_71000482d8:
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

