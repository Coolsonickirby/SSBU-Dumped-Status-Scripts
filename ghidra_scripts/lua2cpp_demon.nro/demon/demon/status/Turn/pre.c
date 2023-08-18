
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterDemon::status::Turn_pre(L2CFighterDemon *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *this_00;
  BattleObjectModuleAccessor *pBVar2;
  ulong uVar3;
  float fVar4;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_TURN);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
  pBVar2 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(this_00);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::FighterSpecializer_Demon::update_opponent_lr_1on1(pBVar2,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue
            (aLStack64,_FIGHTER_SPECIAL_COMMAND_USER_INSTANCE_WORK_ID_FLOAT_OPPONENT_LR_1ON1);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  fVar4 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack96,fVar4);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0.0);
  uVar3 = lib::L2CValue::operator__(aLStack96,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    fVar4 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack64,fVar4);
    uVar3 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_RYU_STATUS_KIND_WALK_BACK);
      iVar1 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::StatusModule__set_status_kind_interrupt_impl(this->moduleAccessor,iVar1);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      goto LAB_7100048124;
    }
  }
  lua2cpp::L2CFighterCommon::status_pre_Turn(this);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_7100048124:
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

