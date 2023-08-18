
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGanon::status::SpecialSCatch_main_loop(L2CFighterGanon *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  Hash40 HVar8;
  float fVar9;
  float fVar10;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  this_00 = &this->globalTable;
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
  lib::L2CValue::L2CValue(aLStack96,1.0);
  uVar7 = lib::L2CValue::operator__(pLVar6,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,0x976c3b29b);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::L2CValue(aLStack128,1.0);
    lib::L2CValue::L2CValue(aLStack144,false);
    HVar8 = lib::L2CValue::as_hash(aLStack96);
    fVar9 = (float)lib::L2CValue::as_number(aLStack112);
    fVar10 = (float)lib::L2CValue::as_number(aLStack128);
    bVar1 = lib::L2CValue::as_bool(aLStack144);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar8,fVar9,fVar10,(bool)(bVar1 & 1),0.0,false,false);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    FUN_7100010b20(this);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
  lib::L2CValue::L2CValue(aLStack96,1.0);
  uVar7 = lib::L2CValue::operator__(aLStack96,pLVar6);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar7 & 1) == 0) {
LAB_71000159ac:
    lib::L2CValue::L2CValue(aLStack112,0);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,8);
    bVar2 = lib::L2CValue::operator_cast_to_bool(pLVar6);
    if ((bVar2 & 1U) == 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
      lib::L2CValue::L2CValue(aLStack96,2.0);
      uVar7 = lib::L2CValue::operator_(aLStack96,pLVar6);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue
                  (aLStack144,_FIGHTER_GANON_STATUS_WORK_ID_FLAG_EXPLOSION_GET_TARGET_TASK_ID);
        iVar3 = lib::L2CValue::as_integer(aLStack144);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
        lib::L2CValue::operator_(aLStack128);
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack144);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack128,LINK_NO_CAPTURE);
          iVar3 = lib::L2CValue::as_integer(aLStack128);
          bVar1 = app::lua_bind::LinkModule__is_linked_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((bVar2 & 1U) != 0) {
            lib::L2CValue::L2CValue(aLStack128,LINK_NO_CAPTURE);
            iVar3 = lib::L2CValue::as_integer(aLStack128);
            uVar4 = app::lua_bind::LinkModule__get_node_object_id_impl(this->moduleAccessor,iVar3);
            lib::L2CValue::L2CValue(aLStack96,uVar4);
            lib::L2CValue::operator_(aLStack112,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack128);
            lib::L2CValue::L2CValue
                      (aLStack96,_FIGHTER_GANON_STATUS_WORK_ID_INT_EXPLOSION_TARGET_TASK_ID);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            iVar5 = lib::L2CValue::as_integer(aLStack96);
            app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar5);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::L2CValue
                      (aLStack96,_FIGHTER_GANON_STATUS_WORK_ID_FLAG_EXPLOSION_GET_TARGET_TASK_ID);
            iVar3 = lib::L2CValue::as_integer(aLStack96);
            app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
            lib::L2CValue::_L2CValue(aLStack96);
          }
        }
      }
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_GANON_STATUS_WORK_ID_FLAG_EXPLOSION_SET_FALL);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::_L2CValue(aLStack96);
LAB_7100015d90:
        lib::L2CValue::_L2CValue(aLStack128);
      }
      else {
        lib::L2CValue::L2CValue
                  (aLStack176,_FIGHTER_GANON_STATUS_WORK_ID_FLAG_EXPLOSION_SET_FALL_CHECKED);
        iVar3 = lib::L2CValue::as_integer(aLStack176);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
        lib::L2CValue::operator_(aLStack160);
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack144);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue
                    (aLStack128,_FIGHTER_GANON_STATUS_WORK_ID_INT_EXPLOSION_TARGET_TASK_ID);
          iVar3 = lib::L2CValue::as_integer(aLStack128);
          iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack96,iVar3);
          lib::L2CValue::operator_(aLStack112,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::L2CValue(aLStack96,0x50000000);
          uVar7 = lib::L2CValue::operator__(aLStack112,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar7 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack128,LINK_NO_CAPTURE);
            iVar3 = lib::L2CValue::as_integer(aLStack128);
            bVar1 = app::lua_bind::LinkModule__is_linked_impl(this->moduleAccessor,iVar3);
            lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
            bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            lib::L2CValue::_L2CValue(aLStack128);
            if ((bVar2 & 1U) != 0) {
              lib::L2CValue::L2CValue(aLStack128,0x2edc251ef8);
              lib::L2CValue::L2CValue(aLStack144,_FIGHTER_STATUS_KIND_DAMAGE_FALL);
              lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
              app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
              lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
              lib::L2CValue::_L2CValue(aLStack96);
              lib::L2CValue::_L2CValue(aLStack144);
              lib::L2CValue::_L2CValue(aLStack128);
              lib::L2CValue::L2CValue
                        (aLStack128,_FIGHTER_GANON_STATUS_WORK_ID_FLAG_EXPLOSION_SET_FALL_CHECKED);
              iVar3 = lib::L2CValue::as_integer(aLStack128);
              app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
              goto LAB_7100015d90;
            }
          }
        }
      }
    }
    lib::L2CValue::_L2CValue(aLStack112);
    iVar3 = 0;
    goto LAB_7100015dcc;
  }
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar7 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack112);
LAB_71000158dc:
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
    uVar7 = lib::L2CValue::operator__(pLVar6,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar7 & 1) == 0) {
      bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((bVar2 & 1U) == 0) goto LAB_71000159ac;
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
    }
    lib::L2CValue::_L2CValue(aLStack112);
    pLVar6 = aLStack96;
LAB_7100015dc0:
    lib::L2CValue::_L2CValue(pLVar6);
  }
  else {
    lib::L2CValue::L2CValue(aLStack192,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x40);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar7 = lib::L2CValue::operator__(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack192);
      pLVar6 = aLStack112;
      goto LAB_7100015dc0;
    }
    lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar7 = lib::L2CValue::operator__(aLStack144,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar7 & 1) != 0) goto LAB_71000158dc;
  }
  iVar3 = 1;
LAB_7100015dcc:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

