
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CWeaponEflameEsword::status::SpecialSFly_main(L2CAgent *this)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  void *pvVar8;
  BattleObjectModuleAccessor *pBVar9;
  Hash40 HVar10;
  ulong uVar11;
  L2CValue *this_00;
  float fVar12;
  float fVar13;
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
  ulong local_60;
  undefined8 uStack88;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_60,GROUND_CORRECT_SHAPE_RHOMBUS_MODIFY_FLAG_FREE_Y);
  lib::L2CValue::L2CValue(aLStack112,true);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  bVar2 = lib::L2CValue::as_bool(aLStack112);
  app::lua_bind::GroundModule__set_shape_flag_impl(this->moduleAccessor,uVar4,(bool)(bVar2 & 1));
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_INSTANCE_WORK_ID_INT_LINK_OWNER);
  iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  iVar5 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar5);
  lib::L2CValue::L2CValue(aLStack112,iVar5);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  uVar6 = lib::L2CValue::as_integer(aLStack112);
  bVar2 = app::sv_battle_object::is_null(uVar6);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
  uVar7 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((uVar7 & 1) == 0) {
    lVar1 = -0x70;
  }
  else {
    uVar6 = lib::L2CValue::as_integer(aLStack112);
    bVar2 = app::sv_battle_object::is_active(uVar6);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar3 & 1U) == 0) goto LAB_710001c53c;
    uVar6 = lib::L2CValue::as_integer(aLStack112);
    pvVar8 = (void *)app::sv_battle_object::module_accessor(uVar6);
    if (pvVar8 == (void *)0x0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_60,
                 (L2CValue *)&FIGHTER_STATUS_WORK_KEEP_FLAG_AIR_LASSO_HANG_FLOAT);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,pvVar8);
    }
    pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer((L2CValue *)&local_60);
    fVar12 = (float)app::lua_bind::PostureModule__lr_impl(pBVar9);
    lib::L2CValue::L2CValue(aLStack128,fVar12);
    fVar12 = (float)lib::L2CValue::as_number(aLStack128);
    app::lua_bind::PostureModule__set_lr_impl(this->moduleAccessor,fVar12);
    app::lua_bind::PostureModule__update_rot_y_lr_impl(this->moduleAccessor);
    lib::L2CValue::_L2CValue(aLStack128);
    lVar1 = -0x50;
  }
  lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
LAB_710001c53c:
  fVar12 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack128,fVar12);
  lib::L2CValue::L2CValue(aLStack144,_WEAPON_EFLAME_ESWORD_INSTANCE_WORK_ID_FLAG_FLICK);
  iVar5 = lib::L2CValue::as_integer(aLStack144);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((bVar3 & 1U) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,1.0);
    uVar7 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0x583a7027c);
      lib::L2CValue::L2CValue(aLStack144,0.0);
      lib::L2CValue::L2CValue(aLStack160,1.0);
      lib::L2CValue::L2CValue(aLStack176,false);
      HVar10 = lib::L2CValue::as_hash((L2CValue *)&local_60);
      fVar12 = (float)lib::L2CValue::as_number(aLStack144);
      fVar13 = (float)lib::L2CValue::as_number(aLStack160);
      bVar2 = lib::L2CValue::as_bool(aLStack176);
      app::lua_bind::MotionModule__change_motion_impl
                (this->moduleAccessor,HVar10,fVar12,fVar13,(bool)(bVar2 & 1),0.0,false,false);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0x579a83f1f);
      lib::L2CValue::L2CValue(aLStack144,0.0);
      lib::L2CValue::L2CValue(aLStack160,1.0);
      lib::L2CValue::L2CValue(aLStack176,false);
      HVar10 = lib::L2CValue::as_hash((L2CValue *)&local_60);
      fVar12 = (float)lib::L2CValue::as_number(aLStack144);
      fVar13 = (float)lib::L2CValue::as_number(aLStack160);
      bVar2 = lib::L2CValue::as_bool(aLStack176);
      app::lua_bind::MotionModule__change_motion_impl
                (this->moduleAccessor,HVar10,fVar12,fVar13,(bool)(bVar2 & 1),0.0,false,false);
    }
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
    lib::L2CValue::L2CValue(aLStack176,0xcedec4cee);
    lib::L2CValue::L2CValue(aLStack192,0x13ef953fc3);
    uVar7 = lib::L2CValue::as_integer(aLStack176);
    uVar11 = lib::L2CValue::as_integer(aLStack192);
    fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar7,uVar11);
    lib::L2CValue::L2CValue(aLStack160,fVar12);
    fVar12 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack208,fVar12);
    lib::L2CValue::operator_(aLStack160,aLStack208);
    lib::L2CValue::L2CValue(aLStack240,0xcedec4cee);
    lib::L2CValue::L2CValue(aLStack256,0x1398920f55);
    uVar7 = lib::L2CValue::as_integer(aLStack240);
    uVar11 = lib::L2CValue::as_integer(aLStack256);
    fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar7,uVar11);
    lib::L2CValue::L2CValue(aLStack224,fVar12);
    lib::L2CAgent::clear_lua_stack(this);
    lib::L2CAgent::push_lua_stack(this,(L2CValue *)&local_60);
    lib::L2CAgent::push_lua_stack(this,aLStack144);
    lib::L2CAgent::push_lua_stack(this,aLStack224);
    app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,1.0);
    uVar7 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0xbdf7f2e8b);
      lib::L2CValue::L2CValue(aLStack144,0.0);
      lib::L2CValue::L2CValue(aLStack160,1.0);
      lib::L2CValue::L2CValue(aLStack176,false);
      HVar10 = lib::L2CValue::as_hash((L2CValue *)&local_60);
      fVar12 = (float)lib::L2CValue::as_number(aLStack144);
      fVar13 = (float)lib::L2CValue::as_number(aLStack160);
      bVar2 = lib::L2CValue::as_bool(aLStack176);
      app::lua_bind::MotionModule__change_motion_impl
                (this->moduleAccessor,HVar10,fVar12,fVar13,(bool)(bVar2 & 1),0.0,false,false);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0xb257013e8);
      lib::L2CValue::L2CValue(aLStack144,0.0);
      lib::L2CValue::L2CValue(aLStack160,1.0);
      lib::L2CValue::L2CValue(aLStack176,false);
      HVar10 = lib::L2CValue::as_hash((L2CValue *)&local_60);
      fVar12 = (float)lib::L2CValue::as_number(aLStack144);
      fVar13 = (float)lib::L2CValue::as_number(aLStack160);
      bVar2 = lib::L2CValue::as_bool(aLStack176);
      app::lua_bind::MotionModule__change_motion_impl
                (this->moduleAccessor,HVar10,fVar12,fVar13,(bool)(bVar2 & 1),0.0,false,false);
    }
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
    lib::L2CValue::L2CValue(aLStack176,0xcedec4cee);
    lib::L2CValue::L2CValue(aLStack192,0x13ef953fc3);
    uVar7 = lib::L2CValue::as_integer(aLStack176);
    uVar11 = lib::L2CValue::as_integer(aLStack192);
    fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar7,uVar11);
    lib::L2CValue::L2CValue(aLStack160,fVar12);
    fVar12 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack208,fVar12);
    lib::L2CValue::operator_(aLStack160,aLStack208);
    lib::L2CValue::L2CValue(aLStack240,0xcedec4cee);
    lib::L2CValue::L2CValue(aLStack256,0x1398920f55);
    uVar7 = lib::L2CValue::as_integer(aLStack240);
    uVar11 = lib::L2CValue::as_integer(aLStack256);
    fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar7,uVar11);
    lib::L2CValue::L2CValue(aLStack224,fVar12);
    lib::L2CAgent::clear_lua_stack(this);
    lib::L2CAgent::push_lua_stack(this,(L2CValue *)&local_60);
    lib::L2CAgent::push_lua_stack(this,aLStack144);
    lib::L2CAgent::push_lua_stack(this,aLStack224);
    app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  }
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this[2].battleObject,5);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(this_00);
  uVar7 = lib::L2CValue::as_number(aLStack144);
  uVar6 = lib::L2CValue::as_number(aLStack160);
  local_60 = uVar7 & 0xffffffff | (ulong)uVar6 << 0x20;
  uStack88 = 0;
  app::WeaponSpecializer_EFlameEsword::energy_motion_set_speed_mul_2nd(pBVar9,(Vector2f *)&local_60)
  ;
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,SpecialSFly_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)((char)&stack0xfffffffffffffff0 + -0x50));
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

