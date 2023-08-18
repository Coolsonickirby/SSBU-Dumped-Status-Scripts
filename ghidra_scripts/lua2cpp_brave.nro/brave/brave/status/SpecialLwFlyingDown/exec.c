
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBrave::status::SpecialLwFlyingDown_exec(L2CFighterBrave *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  GroundCorrectKind GVar3;
  float *pfVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  ulong uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined4 in_s3;
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  undefined8 local_60;
  undefined8 uStack88;
  
  pfVar4 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack160,*pfVar4);
  lib::L2CValue::L2CValue(aLStack144,pfVar4[1]);
  lib::L2CValue::L2CValue(aLStack128,pfVar4[2]);
  FUN_7100004a60(aLStack112,this,aLStack160);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack160);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
  lib::L2CValue::L2CValue(aLStack192,pLVar5);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_FLYING_FLOAT_TARGET_POS_Y);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack208,fVar9);
  lib::L2CValue::L2CValue(aLStack224,0.0);
  lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x40,(L2CValue)0x30,(L2CValue)0x20);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack256,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_FLYING_FLAG_CORRECT_CHANGED);
  iVar2 = lib::L2CValue::as_integer(aLStack256);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
  uVar6 = lib::L2CValue::operator__(aLStack240,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack256);
  if ((uVar6 & 1) != 0) {
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    uVar10 = app::sv_camera_manager::dead_range(this->luaStateAgent);
    local_60 = CONCAT44(in_s1,uVar10);
    uStack88 = CONCAT44(in_s3,in_s2);
    app::lua_bind::lib__Rect__store_l2c_table_impl((Rect *)&local_60);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x1fbdb2615);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x31ed91fca);
    lib::L2CValue::L2CValue(aLStack272,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack288,0x21c1ef43ef);
    uVar6 = lib::L2CValue::as_integer(aLStack272);
    uVar8 = lib::L2CValue::as_integer(aLStack288);
    fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar6,uVar8)
    ;
    lib::L2CValue::L2CValue(aLStack256,fVar9);
    lib::L2CValue::operator_(pLVar7,aLStack256);
    uVar6 = lib::L2CValue::operator_(pLVar5,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack272);
    if ((uVar6 & 1) != 0) {
      fVar9 = (float)app::lua_bind::PostureModule__pos_x_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack256,fVar9);
      fVar9 = (float)app::lua_bind::PostureModule__pos_y_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack272,fVar9);
      uVar10 = lib::L2CValue::as_number(aLStack256);
      uVar11 = lib::L2CValue::as_number(aLStack272);
      local_60 = CONCAT44(uVar11,uVar10);
      uStack88 = 0;
      app::lua_bind::GroundModule__set_shape_safe_pos_impl
                (this->moduleAccessor,(Vector2f *)&local_60);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,GROUND_CORRECT_KIND_AIR);
      GVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_60,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_FLYING_FLAG_CORRECT_CHANGED)
      ;
      iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    }
    lib::L2CValue::_L2CValue(aLStack240);
  }
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x1fbdb2615);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x1fbdb2615);
  uVar6 = lib::L2CValue::operator__(pLVar5,pLVar7);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack256,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_FLYING_INT_ARRIVE_TIME);
    iVar2 = lib::L2CValue::as_integer(aLStack256);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar2);
    lib::L2CValue::L2CValue(aLStack288,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack304,0x1814495267);
    uVar6 = lib::L2CValue::as_integer(aLStack288);
    uVar8 = lib::L2CValue::as_integer(aLStack304);
    iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar8);
    lib::L2CValue::L2CValue(aLStack272,iVar2);
    lib::L2CValue::operator_((L2CValue *)&local_60,aLStack272);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::L2CValue(aLStack272,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_FLYING_INT_COUNTER);
    iVar2 = lib::L2CValue::as_integer(aLStack272);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar2);
    lib::L2CValue::operator_((L2CValue *)&local_60,aLStack240);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
    uVar6 = lib::L2CValue::operator__(aLStack256,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CValue::L2CValue(aLStack304,0xba18057d9);
      lib::L2CValue::L2CValue(aLStack320,0);
      uVar6 = lib::L2CValue::as_integer(aLStack304);
      uVar8 = lib::L2CValue::as_integer(aLStack320);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar6,uVar8);
      lib::L2CValue::L2CValue(aLStack288,fVar9);
      lib::L2CValue::operator_(aLStack288);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
      app::sv_kinetic_energy::set_accel(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CValue::L2CValue(aLStack288,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack304,0xcba402283);
      uVar6 = lib::L2CValue::as_integer(aLStack288);
      uVar8 = lib::L2CValue::as_integer(aLStack304);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar6,uVar8);
      lib::L2CValue::L2CValue(aLStack272,fVar9);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
      app::sv_kinetic_energy::set_brake(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CValue::L2CValue(aLStack272,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
      app::sv_kinetic_energy::set_stable_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    }
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_60,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_FLYING_INT_COUNTER);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    app::lua_bind::WorkModule__inc_int_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue(aLStack288,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_FLYING_INT_COUNTER);
    iVar2 = lib::L2CValue::as_integer(aLStack288);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack272,iVar2);
    lib::L2CValue::L2CValue(aLStack336,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_FLYING_INT_ARRIVE_TIME);
    iVar2 = lib::L2CValue::as_integer(aLStack336);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack320,iVar2);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0xf);
    lib::L2CValue::operator_(aLStack320,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    uVar6 = lib::L2CValue::operator__(aLStack304,aLStack272);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack288);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
    else {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_60,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_FLYING_FLAG_ARRIVED);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
  }
  else {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_60,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_FLYING_FLAG_ARRIVED);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

