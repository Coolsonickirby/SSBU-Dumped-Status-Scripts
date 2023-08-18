
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGanon::status::SpecialLwEnd_main(L2CFighterGanon *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  Hash40 HVar7;
  float fVar8;
  float fVar9;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_GANON_STATUS_WORK_ID_INT_GANON_KICK_START_SITUATION);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack112,iVar2);
  lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
  uVar4 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_GANON_STATUS_WORK_ID_INT_GANON_KICK_END_SITUATION);
    iVar2 = lib::L2CValue::as_integer(aLStack128);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack112,iVar2);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GANON_KICK_END_SITUATION_AG);
    uVar4 = lib::L2CValue::operator__(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar4 & 1) == 0) {
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar4 = lib::L2CValue::operator__(pLVar5,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GANON_KICK_END_SITUATION_AA);
        lib::L2CValue::L2CValue
                  (aLStack112,_FIGHTER_GANON_STATUS_WORK_ID_INT_GANON_KICK_END_SITUATION);
        iVar2 = lib::L2CValue::as_integer(aLStack96);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,0x160e0615b7);
        lib::L2CValue::L2CValue(aLStack112,0.0);
        lib::L2CValue::L2CValue(aLStack128,1.0);
        lib::L2CValue::L2CValue(aLStack144,false);
        HVar7 = lib::L2CValue::as_hash(aLStack96);
        fVar8 = (float)lib::L2CValue::as_number(aLStack112);
        fVar9 = (float)lib::L2CValue::as_number(aLStack128);
        bVar1 = lib::L2CValue::as_bool(aLStack144);
        app::lua_bind::MotionModule__change_motion_impl
                  (this->moduleAccessor,HVar7,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GANON_KICK_AA_TRANSITION_TERM_ID_INHERIT_FALL);
        iVar2 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__enable_transition_term_impl(this->moduleAccessor,iVar2);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GANON_KICK_AA_TRANSITION_TERM_ID_LANDING);
        iVar2 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__enable_transition_term_impl(this->moduleAccessor,iVar2);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GANON_KICK_AA_TRANSITION_TERM_ID_LANDING_WAIT);
        iVar2 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__unable_transition_term_impl(this->moduleAccessor,iVar2);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GANON_KICK_AA_TRANSITION_TERM_ID_LANDING_FALL);
        iVar2 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__unable_transition_term_impl(this->moduleAccessor,iVar2);
        goto LAB_710000e838;
      }
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GANON_KICK_END_SITUATION_AG);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_GANON_STATUS_WORK_ID_INT_GANON_KICK_END_SITUATION)
      ;
      iVar2 = lib::L2CValue::as_integer(aLStack96);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    FUN_7100012020(this);
  }
  else {
    this_00 = &this->globalTable;
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator__(pLVar5,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GANON_KICK_END_SITUATION_GA);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_GANON_STATUS_WORK_ID_INT_GANON_KICK_END_SITUATION)
      ;
      iVar2 = lib::L2CValue::as_integer(aLStack96);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,0x12837845b6);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CValue::L2CValue(aLStack128,1.0);
      lib::L2CValue::L2CValue(aLStack144,false);
      HVar7 = lib::L2CValue::as_hash(aLStack96);
      fVar8 = (float)lib::L2CValue::as_number(aLStack112);
      fVar9 = (float)lib::L2CValue::as_number(aLStack128);
      bVar1 = lib::L2CValue::as_bool(aLStack144);
      app::lua_bind::MotionModule__change_motion_impl
                (this->moduleAccessor,HVar7,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar4 = lib::L2CValue::operator__(aLStack112,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack128,false);
        FUN_71000135a0(aLStack112,this,aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
      }
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x15);
      lib::L2CValue::L2CValue(aLStack96,&DAT_7100013700);
      lib::L2CValue::operator_(pLVar5,aLStack96);
LAB_710000e838:
      pLVar5 = aLStack96;
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GANON_KICK_END_SITUATION_GG);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_GANON_STATUS_WORK_ID_INT_GANON_KICK_END_SITUATION)
      ;
      iVar2 = lib::L2CValue::as_integer(aLStack96);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack112,0);
      lib::L2CValue::L2CValue(aLStack128,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack144,0x1c6a5104ff);
      uVar4 = lib::L2CValue::as_integer(aLStack128);
      uVar6 = lib::L2CValue::as_integer(aLStack144);
      fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar4,uVar6);
      lib::L2CValue::L2CValue(aLStack96,fVar8);
      lib::L2CValue::operator_(aLStack112,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack96,0xee8a2e8a2);
      lib::L2CValue::L2CValue(aLStack128,0.0);
      lib::L2CValue::L2CValue(aLStack144,false);
      HVar7 = lib::L2CValue::as_hash(aLStack96);
      fVar8 = (float)lib::L2CValue::as_number(aLStack128);
      fVar9 = (float)lib::L2CValue::as_number(aLStack112);
      bVar1 = lib::L2CValue::as_bool(aLStack144);
      app::lua_bind::MotionModule__change_motion_impl
                (this->moduleAccessor,HVar7,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar4 = lib::L2CValue::operator__(aLStack128,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack144,false);
        FUN_7100013760(aLStack128,this,aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack144);
      }
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x15);
      lib::L2CValue::L2CValue(aLStack96,&DAT_7100013880);
      lib::L2CValue::operator_(pLVar5,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      pLVar5 = aLStack112;
    }
    lib::L2CValue::_L2CValue(pLVar5);
  }
  lib::L2CValue::L2CValue(aLStack96,SpecialLwEnd_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

