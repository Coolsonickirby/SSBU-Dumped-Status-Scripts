
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterDemon::status::AttackS3_pre(L2CFighterDemon *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  float fVar4;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  iVar1 = app::lua_bind::FighterControlModuleImpl__get_attack_s3_turn_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,iVar1);
  lib::L2CValue::L2CValue(aLStack128,aLStack96);
  fVar4 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,fVar4);
  lib::L2CValue::L2CValue(aLStack64,1.0);
  uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_COMMAND_TURN_LR_LEFT);
    uVar3 = lib::L2CValue::operator__(aLStack128,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,true);
      goto LAB_7100049190;
    }
  }
  lib::L2CValue::L2CValue(aLStack64,-1.0);
  uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_COMMAND_TURN_LR_RIGHT);
    uVar3 = lib::L2CValue::operator__(aLStack128,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,true);
      goto LAB_7100049190;
    }
  }
  lib::L2CValue::L2CValue(aLStack112,false);
LAB_7100049190:
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar3 = lib::L2CValue::operator__(aLStack112,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,FIGHTER_PAD_COMMAND_CATEGORY1);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT1_ATTACK_S3);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::FighterControlModuleImpl__delete_reserve_turn_lr_impl
              (this->moduleAccessor,iVar1,iVar2);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
    lua2cpp::L2CFighterCommon::status_pre_AttackS3(this);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DEMON_INSTANCE_WORK_ID_FLAG_ATTACK_S3_STAND_5);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DEMON_STATUS_KIND_ATTACK_STAND_5);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::StatusModule__set_status_kind_interrupt_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

