
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDedede::status::SpecialHiJump_exit(L2CFighterDedede *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  Hash40 HVar6;
  float fVar7;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this_00 = &this->globalTable;
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_KIND_SPECIAL_HI_LANDING);
  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_KIND_SPECIAL_HI_TURN);
    uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_KIND_SPECIAL_HI_HIT);
      uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) goto LAB_7100007ff0;
    }
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DEDEDE_STATUS_SUPER_JUMP_WORK_FLAG_DIR_L);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_DEDEDE_INSTANCE_WORK_ID_FLAG_SPECIAL_HI_TURN_DAMAGE)
    ;
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,-1.0);
      fVar7 = (float)lib::L2CValue::as_number(aLStack80);
      app::lua_bind::PostureModule__set_lr_impl(this->moduleAccessor,fVar7);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,1.0);
      fVar7 = (float)lib::L2CValue::as_number(aLStack80);
      app::lua_bind::PostureModule__set_lr_impl(this->moduleAccessor,fVar7);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_DEDEDE_INSTANCE_WORK_ID_FLAG_SPECIAL_HI_TURN_DAMAGE)
    ;
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,1.0);
      fVar7 = (float)lib::L2CValue::as_number(aLStack80);
      app::lua_bind::PostureModule__set_lr_impl(this->moduleAccessor,fVar7);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,-1.0);
      fVar7 = (float)lib::L2CValue::as_number(aLStack80);
      app::lua_bind::PostureModule__set_lr_impl(this->moduleAccessor,fVar7);
    }
  }
  lib::L2CValue::_L2CValue(aLStack80);
LAB_7100007ff0:
  lib::L2CValue::L2CValue(aLStack80,0x570211ebd);
  HVar6 = lib::L2CValue::as_hash(aLStack80);
  app::lua_bind::ModelModule__clear_joint_srt_impl(this->moduleAccessor,HVar6);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

