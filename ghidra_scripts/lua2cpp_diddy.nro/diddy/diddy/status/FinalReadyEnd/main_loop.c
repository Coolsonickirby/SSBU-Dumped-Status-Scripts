
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDiddy::status::FinalReadyEnd_main_loop(L2CFighterDiddy *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  GroundCorrectKind GVar5;
  int iVar6;
  float *pfVar7;
  ulong uVar8;
  L2CValue *pLVar9;
  L2CValue *pLVar10;
  ulong uVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined4 in_s3;
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  undefined auStack224 [32];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  undefined8 local_60;
  ulong uStack88;
  
  pfVar7 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack160,*pfVar7);
  lib::L2CValue::L2CValue(aLStack144,pfVar7[1]);
  lib::L2CValue::L2CValue(aLStack128,pfVar7[2]);
  FUN_710001a810(aLStack112,this,aLStack160);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack160);
  uVar12 = app::sv_camera_manager::camera_range();
  local_60 = CONCAT44(in_s1,uVar12);
  uStack88 = CONCAT44(in_s3,in_s2);
  app::lua_bind::lib__Rect__store_l2c_table_impl((Rect *)&local_60);
  lib::L2CValue::L2CValue
            ((L2CValue *)(auStack224 + 0x10),_FIGHTER_DIDDY_STATUS_FINAL_FLAG_END_DECCEL);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)(auStack224 + 0x10));
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack192,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
  uVar8 = lib::L2CValue::operator__(aLStack192,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack224 + 0x10));
  if ((uVar8 & 1) != 0) {
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x1fbdb2615);
    pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x31ed91fca);
    uVar8 = lib::L2CValue::operator__(pLVar9,pLVar10);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_DIDDY_STATUS_FINAL_FLAG_END_DECCEL);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue(aLStack192,0xb54dafbfb);
      lib::L2CValue::L2CValue((L2CValue *)(auStack224 + 0x10),0xa3ce2e01f);
      uVar8 = lib::L2CValue::as_integer(aLStack192);
      uVar11 = lib::L2CValue::as_integer((L2CValue *)(auStack224 + 0x10));
      fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (this->moduleAccessor,uVar8,uVar11);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar13);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack224 + 0x10));
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::L2CValue(aLStack192,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CValue::L2CValue((L2CValue *)(auStack224 + 0x10),0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)(auStack224 + 0x10));
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
      app::sv_kinetic_energy::set_brake(this->luaStateAgent);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack224 + 0x10));
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    }
  }
  this_00 = &this->globalTable;
  pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack224,_FIGHTER_DIDDY_STATUS_FINAL_WORK_INT_WAIT_FLY_COUNT);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack224);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)(auStack224 + 0x10),iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,2);
  lib::L2CValue::operator_((L2CValue *)(auStack224 + 0x10),(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  uVar8 = lib::L2CValue::operator__(aLStack192,pLVar9);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack224 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)auStack224);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_60,_FIGHTER_DIDDY_STATUS_FINAL_WORK_FLOAT_START_POS_Y);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack192,fVar13);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack224,_FIGHTER_DIDDY_STATUS_FINAL_FLAG_END_DECCEL_CHANGED);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack224);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)(auStack224 + 0x10),(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
    uVar8 = lib::L2CValue::operator__((L2CValue *)(auStack224 + 0x10),(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack224 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)auStack224);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack240,0xb54dafbfb);
      lib::L2CValue::L2CValue(aLStack256,0x1a25d7284c);
      uVar8 = lib::L2CValue::as_integer(aLStack240);
      uVar11 = lib::L2CValue::as_integer(aLStack256);
      fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (this->moduleAccessor,uVar8,uVar11);
      lib::L2CValue::L2CValue((L2CValue *)auStack224,fVar13);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,10.0);
      lib::L2CValue::operator_((L2CValue *)auStack224,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)auStack224);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack240);
      pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x1fbdb2615);
      pLVar9 = aLStack192;
      lib::L2CValue::operator_(pLVar10,pLVar9);
      lib::L2CAgent::math_abs((L2CAgent *)auStack224,pLVar9);
      uVar8 = lib::L2CValue::operator__((L2CValue *)&local_60,(L2CValue *)(auStack224 + 0x10));
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)auStack224);
      if ((uVar8 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_DIDDY_STATUS_FINAL_FLAG_END_DECCEL);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_60,_FIGHTER_DIDDY_STATUS_FINAL_FLAG_END_DECCEL_CHANGED);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        lib::L2CValue::L2CValue((L2CValue *)auStack224,0xb54dafbfb);
        lib::L2CValue::L2CValue(aLStack240,0x122d5bd7dc);
        uVar8 = lib::L2CValue::as_integer((L2CValue *)auStack224);
        uVar11 = lib::L2CValue::as_integer(aLStack240);
        fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                  (this->moduleAccessor,uVar8,uVar11);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar13);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue((L2CValue *)auStack224);
        lib::L2CValue::L2CValue((L2CValue *)auStack224,_FIGHTER_KINETIC_ENERGY_ID_STOP);
        lib::L2CValue::L2CValue(aLStack240,0.0);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack224);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
        app::sv_kinetic_energy::set_brake(this->luaStateAgent);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue((L2CValue *)auStack224);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      }
      lib::L2CValue::_L2CValue((L2CValue *)(auStack224 + 0x10));
    }
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x1fbdb2615);
    uVar8 = lib::L2CValue::operator__(pLVar9,aLStack192);
    if ((uVar8 & 1) == 0) {
LAB_710001a42c:
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
    else {
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack224,_FIGHTER_DIDDY_STATUS_FINAL_WORK_INT_WAIT_FLY_COUNT);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack224);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)(auStack224 + 0x10),iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,999);
      uVar8 = lib::L2CValue::operator__((L2CValue *)(auStack224 + 0x10),(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack224 + 0x10));
      lib::L2CValue::_L2CValue((L2CValue *)auStack224);
      if ((uVar8 & 1) == 0) goto LAB_710001a42c;
      pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
      pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x162d277af);
      uVar12 = lib::L2CValue::as_number(pLVar9);
      uVar14 = lib::L2CValue::as_number(aLStack192);
      uVar4 = lib::L2CValue::as_number(pLVar10);
      local_60 = CONCAT44(uVar14,uVar12);
      uStack88 = (ulong)uVar4;
      app::lua_bind::PostureModule__set_pos_impl(this->moduleAccessor,(Vector3f *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,true);
      bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_60);
      app::lua_bind::GroundModule__set_collidable_impl(this->moduleAccessor,(bool)(bVar1 & 1));
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,true);
      bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_60);
      app::lua_bind::GroundModule__set_attach_ground_impl(this->moduleAccessor,(bool)(bVar1 & 1));
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CValue::L2CValue((L2CValue *)(auStack224 + 0x10),0.0);
      lib::L2CValue::L2CValue((L2CValue *)auStack224,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)(auStack224 + 0x10));
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack224);
      app::sv_kinetic_energy::set_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue((L2CValue *)auStack224);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack224 + 0x10));
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CValue::L2CValue((L2CValue *)(auStack224 + 0x10),0.0);
      lib::L2CValue::L2CValue((L2CValue *)auStack224,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)(auStack224 + 0x10));
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack224);
      app::sv_kinetic_energy::set_accel(this->luaStateAgent);
      lib::L2CValue::_L2CValue((L2CValue *)auStack224);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack224 + 0x10));
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_60,_FIGHTER_DIDDY_STATUS_FINAL_WORK_INT_WAIT_FLY_COUNT);
      iVar3 = lib::L2CValue::as_integer(pLVar9);
      iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar6);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
    lib::L2CValue::_L2CValue(aLStack192);
    goto LAB_710001a4d4;
  }
  pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_SITUATION_KIND_GROUND);
  uVar8 = lib::L2CValue::operator__(pLVar9,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack192,GROUND_TOUCH_FLAG_DOWN);
    uVar4 = lib::L2CValue::as_integer(aLStack192);
    bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack192);
    if ((bVar2 & 1U) != 0) goto LAB_7100019eb0;
    lib::L2CValue::L2CValue((L2CValue *)&local_60,GROUND_CORRECT_KIND_AIR);
    GVar5 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar5);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,SITUATION_KIND_AIR);
    lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0xa0);
  }
  else {
LAB_7100019eb0:
    lib::L2CValue::L2CValue((L2CValue *)&local_60,GROUND_CORRECT_KIND_GROUND);
    GVar5 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar5);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_SITUATION_KIND_GROUND);
    lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0xa0);
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_DIDDY_STATUS_KIND_FINAL_END);
  lib::L2CValue::L2CValue((L2CValue *)(auStack224 + 0x10),false);
  lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x40,(L2CValue)0x30);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack224 + 0x10));
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_710001a4d4:
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

