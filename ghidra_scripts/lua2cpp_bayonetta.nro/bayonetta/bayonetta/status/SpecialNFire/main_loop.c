
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBayonetta::status::SpecialNFire_main_loop
          (L2CFighterBayonetta *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  long lVar8;
  Hash40 HVar9;
  float fVar10;
  float fVar11;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x17);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) != 0) goto LAB_710002c86c;
    }
    else {
      lib::L2CValue::_L2CValue(aLStack112);
    }
  }
  else {
    lib::L2CValue::_L2CValue(aLStack112);
LAB_710002c86c:
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) {
      FUN_710000d730(this);
    }
  }
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack144,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x70);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar5 = lib::L2CValue::operator__(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar5 = lib::L2CValue::operator__(aLStack160,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) != 0) goto LAB_710002ca28;
    }
    iVar3 = 1;
    goto LAB_710002d0e8;
  }
  lib::L2CValue::_L2CValue(aLStack112);
LAB_710002ca28:
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    this_00 = &this->globalTable;
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) != 0) goto LAB_710002ca64;
    }
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) != 0) goto LAB_710002ca6c;
    }
    else {
      lib::L2CValue::_L2CValue(aLStack112);
    }
  }
  else {
LAB_710002ca64:
    lib::L2CValue::_L2CValue(aLStack112);
LAB_710002ca6c:
    FUN_710002bb90(this);
  }
  lib::L2CValue::L2CValue
            (aLStack112,
             _FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_N_FLAG_REQ_REMOVE_BULLETCLIMAX_CIRCLE);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue
              (aLStack128,
               _FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_N_FLAG_REMOVE_BULLETCLIMAX_CIRCLE);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,MA_MSC_CMD_EFFECT_EFFECT_OFF_KIND);
      lib::L2CValue::L2CValue(aLStack128,0x1d586e7454);
      lib::L2CValue::L2CValue(aLStack160,false);
      lib::L2CValue::L2CValue(aLStack176,false);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
      app::sv_module_access::effect(this->luaStateAgent);
      lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue
                (aLStack96,
                 _FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_N_FLAG_REMOVE_BULLETCLIMAX_CIRCLE);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue
              (aLStack96,
               _FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_N_FLAG_REQ_REMOVE_BULLETCLIMAX_CIRCLE);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue
              (aLStack128,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_N_INT_TRIGGER_COUNT);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    lib::L2CValue::L2CValue(aLStack176,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack192,0x1e82eaea5f);
    uVar5 = lib::L2CValue::as_integer(aLStack176);
    uVar7 = lib::L2CValue::as_integer(aLStack192);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar7);
    lib::L2CValue::L2CValue(aLStack160,iVar3);
    uVar5 = lib::L2CValue::operator__(aLStack160,aLStack96);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BAYONETTA_STATUS_KIND_SPECIAL_N_END);
      lib::L2CValue::L2CValue(aLStack128,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x80);
    }
    else {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar5 = lib::L2CValue::operator__(pLVar6,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue
                  (aLStack128,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_N_INT_MOTION_KIND_A);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        lVar8 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack96,lVar8);
        lib::L2CValue::L2CValue(aLStack160,0.0);
        lib::L2CValue::L2CValue(aLStack176,1.0);
        lib::L2CValue::L2CValue(aLStack192,false);
        HVar9 = lib::L2CValue::as_hash(aLStack96);
        fVar10 = (float)lib::L2CValue::as_number(aLStack160);
        fVar11 = (float)lib::L2CValue::as_number(aLStack176);
        bVar1 = lib::L2CValue::as_bool(aLStack192);
        app::lua_bind::MotionModule__change_motion_impl
                  (this->moduleAccessor,HVar9,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
      }
      else {
        lib::L2CValue::L2CValue
                  (aLStack128,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_N_INT_MOTION_KIND_G);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        lVar8 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack96,lVar8);
        lib::L2CValue::L2CValue(aLStack160,0.0);
        lib::L2CValue::L2CValue(aLStack176,1.0);
        lib::L2CValue::L2CValue(aLStack192,false);
        HVar9 = lib::L2CValue::as_hash(aLStack96);
        fVar10 = (float)lib::L2CValue::as_number(aLStack160);
        fVar11 = (float)lib::L2CValue::as_number(aLStack176);
        bVar1 = lib::L2CValue::as_bool(aLStack192);
        app::lua_bind::MotionModule__change_motion_impl
                  (this->moduleAccessor,HVar9,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
      }
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue
                (aLStack96,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_N_FLAG_SPECIAL_N_CHARGE_MAX);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue
                (aLStack96,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_N_INT_ADD_FIRE_COUNT);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__dec_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,0);
      lib::L2CValue::L2CValue
                (aLStack128,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_N_INT_TRIGGER_COUNT);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      iVar4 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
    }
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  iVar3 = 0;
LAB_710002d0e8:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

