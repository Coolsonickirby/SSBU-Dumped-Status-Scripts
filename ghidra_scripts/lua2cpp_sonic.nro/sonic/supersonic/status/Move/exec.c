
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponSonicSupersonic::status::Move_exec(L2CWeaponSonicSupersonic *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  ulong uVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  L2CValue *pLVar9;
  L2CValue *this_00;
  L2CAgent *this_01;
  Hash40 HVar10;
  undefined4 uVar11;
  float fVar12;
  uint uVar13;
  long lVar14;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined4 in_s3;
  L2CValue aLStack352 [16];
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
  void **local_60;
  lua_State *plStack88;
  
  pfVar5 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack160,*pfVar5);
  lib::L2CValue::L2CValue(aLStack144,pfVar5[1]);
  lib::L2CValue::L2CValue(aLStack128,pfVar5[2]);
  FUN_7100028a00(aLStack112,this,aLStack160);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack160);
  uVar11 = app::sv_camera_manager::camera_range();
  local_60 = (void **)CONCAT44(in_s1,uVar11);
  plStack88 = (lua_State *)CONCAT44(in_s3,in_s2);
  app::lua_bind::lib__Rect__store_l2c_table_impl((Rect *)&local_60);
  lib::L2CValue::L2CValue(aLStack224,0x102643cb05);
  lib::L2CValue::L2CValue(aLStack240,0x125dff5764);
  uVar6 = lib::L2CValue::as_integer(aLStack224);
  uVar7 = lib::L2CValue::as_integer(aLStack240);
  fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack208,fVar12);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,10.0);
  lib::L2CValue::operator_(aLStack208,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x5b4ca7514);
  lib::L2CValue::operator_(pLVar8,aLStack192);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x5b4ca7514);
  lib::L2CValue::operator_(pLVar8,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x47a67e768);
  lib::L2CValue::operator_(pLVar8,aLStack192);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x47a67e768);
  lib::L2CValue::operator_(pLVar8,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_SONIC_SUPERSONIC_KINETIC_ENERGY_ID_GENERAL);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
  fVar12 = (float)app::sv_kinetic_energy::get_speed_x(this->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack208,fVar12);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue(aLStack224,false);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
  uVar6 = lib::L2CValue::operator_((L2CValue *)&local_60,aLStack208);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((uVar6 & 1) == 0) {
LAB_7100027e04:
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
    uVar6 = lib::L2CValue::operator_(aLStack208,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar6 & 1) == 0) goto LAB_7100027ebc;
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x47a67e768);
    uVar6 = lib::L2CValue::operator_(pLVar8,pLVar9);
    if ((uVar6 & 1) == 0) goto LAB_7100027ebc;
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x47a67e768);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
    lib::L2CValue::operator_(pLVar9,pLVar8);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,true);
    lib::L2CValue::operator_(aLStack224,(L2CValue *)&local_60);
  }
  else {
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x5b4ca7514);
    uVar6 = lib::L2CValue::operator_(pLVar9,pLVar8);
    if ((uVar6 & 1) == 0) goto LAB_7100027e04;
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x5b4ca7514);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
    lib::L2CValue::operator_(pLVar9,pLVar8);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,true);
    lib::L2CValue::operator_(aLStack224,(L2CValue *)&local_60);
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
LAB_7100027ebc:
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack224);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue
              (aLStack256,_WEAPON_SONIC_SUPERSONIC_STATUS_FINAL_MOVE_WORK_INT_EXIST_COUNTER);
    iVar3 = lib::L2CValue::as_integer(aLStack256);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack240,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
    uVar6 = lib::L2CValue::operator_(aLStack240,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack256);
    if ((uVar6 & 1) == 0) {
      pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
      pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x1fbdb2615);
      this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x162d277af);
      uVar6 = lib::L2CValue::as_number(pLVar8);
      lVar14 = lib::L2CValue::as_number(pLVar9);
      uVar13 = lib::L2CValue::as_number(this_00);
      local_60 = (void **)(uVar6 & 0xffffffff | lVar14 << 0x20);
      plStack88 = (lua_State *)(ulong)uVar13;
      app::lua_bind::PostureModule__set_pos_impl(this->moduleAccessor,(Vector3f *)&local_60);
      lib::L2CValue::L2CValue(aLStack240,0x102643cb05);
      lib::L2CValue::L2CValue(aLStack256,0x12f5051cf8);
      uVar6 = lib::L2CValue::as_integer(aLStack240);
      uVar7 = lib::L2CValue::as_integer(aLStack256);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar7);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar3);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::L2CValue
                (aLStack240,_WEAPON_SONIC_SUPERSONIC_STATUS_FINAL_MOVE_WORK_INT_RESTART_COUNTER);
      iVar3 = lib::L2CValue::as_integer(aLStack240);
      app::lua_bind::WorkModule__inc_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack240);
      app::lua_bind::AttackModule__clear_all_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue
                (aLStack256,_WEAPON_SONIC_SUPERSONIC_STATUS_FINAL_MOVE_WORK_INT_RESTART_COUNTER);
      iVar3 = lib::L2CValue::as_integer(aLStack256);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack240,iVar3);
      uVar6 = lib::L2CValue::operator__((L2CValue *)&local_60,aLStack240);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack256);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack240,false);
        bVar2 = lib::L2CValue::as_bool(aLStack240);
        app::lua_bind::VisibilityModule__set_whole_impl(this->moduleAccessor,(bool)(bVar2 & 1));
        lib::L2CValue::_L2CValue(aLStack240);
        FUN_710002b000(this);
      }
      else {
        lib::L2CValue::L2CValue(aLStack240,false);
        FUN_7100028ac0(this,aLStack240);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::L2CValue(aLStack256,0);
        lib::L2CValue::L2CValue
                  (aLStack272,_WEAPON_SONIC_SUPERSONIC_STATUS_FINAL_MOVE_WORK_INT_RESTART_COUNTER);
        iVar3 = lib::L2CValue::as_integer(aLStack256);
        iVar4 = lib::L2CValue::as_integer(aLStack272);
        app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::L2CValue(aLStack256,true);
        bVar2 = lib::L2CValue::as_bool(aLStack256);
        app::lua_bind::VisibilityModule__set_whole_impl(this->moduleAccessor,(bool)(bVar2 & 1));
        lib::L2CValue::_L2CValue(aLStack256);
        FUN_710002ad80(this);
      }
    }
    else {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_60,_WEAPON_SONIC_SUPERSONIC_STATUS_FINAL_WORK_FLAG_TO_END);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
    }
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_SONIC_SUPERSONIC_KINETIC_ENERGY_ID_GENERAL);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
  fVar12 = (float)app::sv_kinetic_energy::get_speed_x(this->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack272,fVar12);
  lib::L2CValue::L2CValue(aLStack304,_WEAPON_SONIC_SUPERSONIC_KINETIC_ENERGY_ID_GENERAL);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack304);
  fVar12 = (float)app::sv_kinetic_energy::get_speed_y(this->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack288,fVar12);
  pLVar8 = aLStack288;
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xf0,SUB81(pLVar8,0));
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  this_01 = (L2CAgent *)lib::L2CValue::operator__(aLStack256,0x1fbdb2615);
  pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x18cdc1683);
  lib::L2CAgent::math_atan(this_01,pLVar9,pLVar8);
  lib::L2CAgent::math_deg((L2CAgent *)&local_60,pLVar9);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,-360.0);
  uVar6 = lib::L2CValue::operator_(aLStack304,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,360.0);
    lib::L2CValue::operator_(aLStack304,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::operator_(aLStack304,aLStack320);
    lib::L2CValue::_L2CValue(aLStack320);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_60,360.0);
  uVar6 = lib::L2CValue::operator_((L2CValue *)&local_60,aLStack304);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,360.0);
    lib::L2CValue::operator_(aLStack304,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::operator_(aLStack304,aLStack320);
    lib::L2CValue::_L2CValue(aLStack320);
  }
  fVar12 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack320,fVar12);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,-1.0);
  uVar6 = lib::L2CValue::operator__(aLStack320,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack320);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,180.0);
    lib::L2CValue::operator_(aLStack304,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::operator_(aLStack304,aLStack320);
    lib::L2CValue::_L2CValue(aLStack320);
  }
  lib::L2CValue::L2CValue(aLStack320,0x31ed91fca);
  lib::L2CValue::L2CValue(aLStack336,0.0);
  fVar12 = (float)app::lua_bind::PostureModule__rot_y_lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack352,fVar12);
  HVar10 = lib::L2CValue::as_hash(aLStack320);
  uVar6 = lib::L2CValue::as_number(aLStack336);
  lVar14 = lib::L2CValue::as_number(aLStack352);
  uVar13 = lib::L2CValue::as_number(aLStack304);
  local_60 = (void **)(uVar6 & 0xffffffff | lVar14 << 0x20);
  plStack88 = (lua_State *)(ulong)uVar13;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (this->moduleAccessor,HVar10,(Vector3f *)&local_60,0,0);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
  lib::L2CValue::operator_(aLStack304,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_WEAPON_SONIC_SUPERSONIC_STATUS_FINAL_WORK_FLOAT_DEGREE);
  fVar12 = (float)lib::L2CValue::as_number(aLStack320);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar12,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

