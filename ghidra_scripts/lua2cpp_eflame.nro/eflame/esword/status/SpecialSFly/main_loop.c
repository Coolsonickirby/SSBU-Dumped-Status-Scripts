
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponEflameEsword::status::SpecialSFly_main_loop
          (L2CWeaponEflameEsword *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  ulong uVar6;
  BattleObjectModuleAccessor *pBVar7;
  L2CValue *this_01;
  ulong *this_02;
  L2CValue *pLVar8;
  BattleObjectModuleAccessor **ppBVar9;
  float fVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  ulong local_d0;
  undefined8 uStack200;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  ulong auStack128 [2];
  
  this_00 = &this->globalTable;
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
  lib::L2CValue::L2CValue((L2CValue *)&local_d0,1);
  uVar5 = lib::L2CValue::operator__(pLVar4,(L2CValue *)&local_d0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack128,_WEAPON_EFLAME_ESWORD_INSTANCE_WORK_ID_FLAG_FLICK);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack128);
    ppBVar9 = &this->moduleAccessor;
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_d0,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_d0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
    lib::L2CValue::_L2CValue((L2CValue *)auStack128);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack144,0xcedec4cee);
      lib::L2CValue::L2CValue(aLStack160,0xbfa5ff42f);
      uVar5 = lib::L2CValue::as_integer(aLStack144);
      uVar6 = lib::L2CValue::as_integer(aLStack160);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
      lib::L2CValue::L2CValue((L2CValue *)auStack128,fVar10);
      lib::L2CValue::L2CValue(aLStack224,0xcedec4cee);
      lib::L2CValue::L2CValue(aLStack240,0xbc73fdd9f);
      uVar5 = lib::L2CValue::as_integer(aLStack224);
      uVar6 = lib::L2CValue::as_integer(aLStack240);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack176,fVar10);
      pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
      uVar5 = lib::L2CValue::as_number((L2CValue *)auStack128);
      uVar11 = lib::L2CValue::as_number(aLStack176);
      local_d0 = uVar5 & 0xffffffff | (ulong)uVar11 << 0x20;
      uStack200 = 0;
      app::WeaponSpecializer_EFlameEsword::energy_motion_set_speed_mul_2nd
                (pBVar7,(Vector2f *)&local_d0);
    }
    else {
      lib::L2CValue::L2CValue(aLStack144,0xcedec4cee);
      lib::L2CValue::L2CValue(aLStack160,0x1171a052c9);
      uVar5 = lib::L2CValue::as_integer(aLStack144);
      uVar6 = lib::L2CValue::as_integer(aLStack160);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
      lib::L2CValue::L2CValue((L2CValue *)auStack128,fVar10);
      lib::L2CValue::L2CValue(aLStack224,0xcedec4cee);
      lib::L2CValue::L2CValue(aLStack240,0x114cc07b79);
      uVar5 = lib::L2CValue::as_integer(aLStack224);
      uVar6 = lib::L2CValue::as_integer(aLStack240);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack176,fVar10);
      pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
      uVar5 = lib::L2CValue::as_number((L2CValue *)auStack128);
      uVar11 = lib::L2CValue::as_number(aLStack176);
      local_d0 = uVar5 & 0xffffffff | (ulong)uVar11 << 0x20;
      uStack200 = 0;
      app::WeaponSpecializer_EFlameEsword::energy_motion_set_speed_mul_2nd
                (pBVar7,(Vector2f *)&local_d0);
    }
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue((L2CValue *)auStack128);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::L2CValue((L2CValue *)&local_d0,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
    lib::L2CValue::L2CValue((L2CValue *)auStack128,0.0);
    lib::L2CValue::L2CValue(aLStack144,0.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_d0);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack128);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
    app::sv_kinetic_energy::set_speed(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue((L2CValue *)auStack128);
    lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
  }
  ppBVar9 = &this->moduleAccessor;
  fVar10 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack256,fVar10);
  lib::L2CValue::L2CValue(aLStack288,_GROUND_TOUCH_FLAG_ALL);
  lib::L2CValue::L2CValue(aLStack304,aLStack256);
  lib::L2CValue::operator_(aLStack304);
  lua2cpp::L2CFighterBase::sign(this,(L2CValue)0x60);
  lib::L2CValue::operator_(aLStack304,(L2CValue *)&local_d0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
  lib::L2CValue::_L2CValue(aLStack160);
  uVar11 = lib::L2CValue::as_integer(aLStack288);
  bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar11);
  lib::L2CValue::L2CValue((L2CValue *)&local_d0,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_d0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
  if ((bVar2 & 1U) == 0) {
LAB_7100023cc8:
    lib::L2CValue::L2CValue(aLStack272,false);
  }
  else {
    uVar11 = lib::L2CValue::as_integer(aLStack288);
    uVar15 = app::lua_bind::GroundModule__get_touch_normal_impl(this->moduleAccessor,uVar11);
    lib::L2CValue::L2CValue((L2CValue *)&local_d0,(float)uVar15);
    lib::L2CValue::L2CValue(aLStack192,(float)((ulong)uVar15 >> 0x20));
    lib::L2CValue::L2CValue((L2CValue *)auStack128,(L2CValue *)&local_d0);
    lib::L2CValue::L2CValue(aLStack144,aLStack192);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x80,(L2CValue)0x70);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue((L2CValue *)auStack128);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x18cdc1683);
    this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x1fbdb2615);
    pLVar8 = (L2CValue *)0x0;
    lib::L2CValue::L2CValue((L2CValue *)auStack128,0);
    fVar10 = (float)lib::L2CValue::as_number(pLVar4);
    fVar12 = (float)lib::L2CValue::as_number(this_01);
    fVar13 = (float)lib::L2CValue::as_number(aLStack304);
    fVar14 = (float)lib::L2CValue::as_number((L2CValue *)auStack128);
    fVar10 = (float)app::sv_math::vec2_angle(fVar10,fVar12,fVar13,fVar14);
    lib::L2CValue::L2CValue(aLStack144,fVar10);
    lib::L2CValue::_L2CValue((L2CValue *)auStack128);
    lib::L2CAgent::math_deg((L2CAgent *)aLStack144,pLVar8);
    lib::L2CValue::L2CValue((L2CValue *)auStack128,0x5a);
    lib::L2CValue::operator_((L2CValue *)auStack128,aLStack240);
    lib::L2CValue::_L2CValue((L2CValue *)auStack128);
    lib::L2CValue::operator_(aLStack144,aLStack224);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::L2CValue(aLStack224,0xcedec4cee);
    lib::L2CValue::L2CValue(aLStack240,0xaa89b626d);
    uVar5 = lib::L2CValue::as_integer(aLStack224);
    uVar6 = lib::L2CValue::as_integer(aLStack240);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar5,uVar6);
    lib::L2CValue::L2CValue((L2CValue *)auStack128,fVar10);
    uVar5 = lib::L2CValue::operator_((L2CValue *)auStack128,aLStack144);
    lib::L2CValue::_L2CValue((L2CValue *)auStack128);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack176);
      goto LAB_7100023cc8;
    }
    lib::L2CValue::L2CValue(aLStack272,true);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack176);
  }
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack272);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_d0,0xcedec4cee);
    lib::L2CValue::L2CValue(aLStack144,0xdc91d80fc);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_d0);
    uVar6 = lib::L2CValue::as_integer(aLStack144);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar9,uVar5,uVar6);
    lib::L2CValue::L2CValue((L2CValue *)auStack128,iVar3);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
    lib::L2CValue::L2CValue(aLStack144,_WEAPON_EFLAME_ESWORD_INSTANCE_WORK_ID_FLAG_FLICK);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_d0,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_d0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack144,0xcedec4cee);
      lib::L2CValue::L2CValue(aLStack160,0x13c98fb61d);
      uVar5 = lib::L2CValue::as_integer(aLStack144);
      uVar6 = lib::L2CValue::as_integer(aLStack160);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar9,uVar5,uVar6);
      lib::L2CValue::L2CValue((L2CValue *)&local_d0,iVar3);
      lib::L2CValue::operator_((L2CValue *)auStack128,(L2CValue *)&local_d0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
    }
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
    uVar5 = lib::L2CValue::operator__(pLVar4,(L2CValue *)auStack128);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_d0,_WEAPON_EFLAME_ESWORD_STATUS_KIND_SPECIAL_S_HOP)
      ;
      lib::L2CValue::L2CValue(aLStack144,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x30,(L2CValue)0x70);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue((L2CValue *)&local_d0);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      this_02 = auStack128;
      goto LAB_7100024000;
    }
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
    lib::L2CValue::L2CValue(aLStack144,0.0);
    lib::L2CValue::L2CValue(aLStack160,0.0);
    pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
    uVar5 = lib::L2CValue::as_number(aLStack144);
    uVar11 = lib::L2CValue::as_number(aLStack160);
    local_d0 = uVar5 & 0xffffffff | (ulong)uVar11 << 0x20;
    uStack200 = 0;
    app::WeaponSpecializer_EFlameEsword::energy_motion_set_speed_mul_2nd
              (pBVar7,(Vector2f *)&local_d0);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue((L2CValue *)auStack128);
  }
  FUN_710001f640(this);
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack128,_WEAPON_EFLAME_ESWORD_STATUS_SPECIAL_S_FLOAT_SPEED_ANGLE_RAD);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack128);
  fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_d0,fVar10);
  lib::L2CValue::_L2CValue((L2CValue *)auStack128);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
  pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
  fVar10 = (float)lib::L2CValue::as_number((L2CValue *)&local_d0);
  app::WeaponSpecializer_EFlameEsword::energy_motion_set_angle(pBVar7,fVar10);
  bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar9);
  lib::L2CValue::L2CValue((L2CValue *)auStack128,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)auStack128);
  lib::L2CValue::_L2CValue((L2CValue *)auStack128);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack128,_WEAPON_EFLAME_ESWORD_STATUS_KIND_SPECIAL_S_ROTATE);
    lib::L2CValue::L2CValue(aLStack144,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x80,(L2CValue)0x70);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue((L2CValue *)auStack128);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  this_02 = &local_d0;
LAB_7100024000:
  lib::L2CValue::_L2CValue((L2CValue *)this_02);
  lib::L2CValue::_L2CValue(aLStack256);
  return;
}

