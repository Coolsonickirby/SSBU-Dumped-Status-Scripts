
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::MetaknightSpecialN_main(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  L2CValue *this_00;
  ulong uVar4;
  long lVar5;
  Hash40 HVar6;
  float fVar7;
  float fVar8;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack96,-1);
  lib::L2CValue::L2CValue
            (aLStack112,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_N_SPIN_WORK_INT_EFFECT_START_FRAME);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
  uVar4 = lib::L2CValue::operator__(this_00,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,0x1331f32137);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_METAKNIGHT_STATUS_WORK_INT_MOT_KIND);
    lVar5 = lib::L2CValue::as_integer(aLStack96);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar5,iVar2);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0x1331f32137);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_METAKNIGHT_STATUS_WORK_INT_MOT_AIR_KIND);
    lVar5 = lib::L2CValue::as_integer(aLStack96);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar5,iVar2);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0x1331f32137);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::L2CValue(aLStack128,1.0);
    lib::L2CValue::L2CValue(aLStack144,false);
    HVar6 = lib::L2CValue::as_hash(aLStack96);
    fVar7 = (float)lib::L2CValue::as_number(aLStack112);
    fVar8 = (float)lib::L2CValue::as_number(aLStack128);
    bVar1 = lib::L2CValue::as_bool(aLStack144);
    app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
              (this->moduleAccessor,HVar6,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,0xf3a6aace3);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_METAKNIGHT_STATUS_WORK_INT_MOT_KIND);
    lVar5 = lib::L2CValue::as_integer(aLStack96);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar5,iVar2);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0xf3a6aace3);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_METAKNIGHT_STATUS_WORK_INT_MOT_AIR_KIND);
    lVar5 = lib::L2CValue::as_integer(aLStack96);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar5,iVar2);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0xf3a6aace3);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::L2CValue(aLStack128,1.0);
    lib::L2CValue::L2CValue(aLStack144,false);
    HVar6 = lib::L2CValue::as_hash(aLStack96);
    fVar7 = (float)lib::L2CValue::as_number(aLStack112);
    fVar8 = (float)lib::L2CValue::as_number(aLStack128);
    bVar1 = lib::L2CValue::as_bool(aLStack144);
    app::lua_bind::FighterMotionModuleImpl__change_motion_kirby_copy_impl
              (this->moduleAccessor,HVar6,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
  }
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
  lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue
            (aLStack128,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_N_SPIN_WORK_INT_BUTTON_ATTACK_COUNTER);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  FUN_71001ee150(this);
  lib::L2CValue::L2CValue(aLStack112,MetaknightSpecialN_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x90);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

