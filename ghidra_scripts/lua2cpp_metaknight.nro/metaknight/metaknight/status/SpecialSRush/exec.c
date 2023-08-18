
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMetaknight::status::SpecialSRush_exec(L2CFighterMetaknight *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  AttackData *pAVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  float *pfVar8;
  ulong uVar9;
  L2CValue *this_00;
  L2CValue *this_01;
  BattleObjectModuleAccessor **ppBVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
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
  ulong uStack88;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_60,2);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  ppBVar10 = &this->moduleAccessor;
  bVar1 = app::lua_bind::AttackModule__is_attack_impl(*ppBVar10,iVar3,false);
  lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack176);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,2);
    lib::L2CValue::L2CValue(aLStack112,false);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    bVar1 = lib::L2CValue::as_bool(aLStack112);
    pAVar5 = (AttackData *)
             app::lua_bind::AttackModule__attack_data_impl(*ppBVar10,iVar3,(bool)(bVar1 & 1));
    app::lua_bind::AttackData__store_l2c_table_impl(pAVar5);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x1196f0150a);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_60,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_S_RUSH_WORK_INT_HIT_FRAME);
    iVar3 = lib::L2CValue::as_integer(pLVar6);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar3,iVar4);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack176);
  }
  fVar11 = (float)app::lua_bind::ControlModule__get_stick_y_impl(*ppBVar10);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar11);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  uVar7 = lib::L2CValue::operator__((L2CValue *)&local_60,aLStack176);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((uVar7 & 1) != 0) goto LAB_71000035e4;
  fVar11 = (float)app::lua_bind::ControlModule__get_stick_y_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack112,fVar11);
  lib::L2CValue::L2CValue(aLStack176,-1.0);
  uVar7 = lib::L2CValue::operator_(aLStack112,aLStack176);
  lib::L2CValue::_L2CValue(aLStack176);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack176,1.0);
    uVar7 = lib::L2CValue::operator_(aLStack176,aLStack112);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack176,1.0);
      lib::L2CValue::operator_(aLStack112,aLStack176);
      goto LAB_71000032b8;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack176,-1.0);
    lib::L2CValue::operator_(aLStack112,aLStack176);
LAB_71000032b8:
    lib::L2CValue::_L2CValue(aLStack176);
  }
  pfVar8 = (float *)app::lua_bind::PostureModule__rot_impl(*ppBVar10,0);
  lib::L2CValue::L2CValue(aLStack176,*pfVar8);
  lib::L2CValue::L2CValue(aLStack160,pfVar8[1]);
  lib::L2CValue::L2CValue(aLStack144,pfVar8[2]);
  FUN_7100004060(aLStack128,this,aLStack176);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue
            (aLStack208,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_S_RUSH_WORK_INT_GURAD_HIT_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack208);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
  lib::L2CValue::L2CValue(aLStack192,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
  uVar7 = lib::L2CValue::operator_((L2CValue *)&local_60,aLStack192);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack208);
  if ((uVar7 & 1) == 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x18cdc1683);
    lib::L2CValue::operator_(aLStack112);
    lib::L2CValue::L2CValue(aLStack240,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack256,0x12ce938356);
    uVar7 = lib::L2CValue::as_integer(aLStack240);
    uVar9 = lib::L2CValue::as_integer(aLStack256);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar7,uVar9);
    lib::L2CValue::L2CValue(aLStack224,fVar11);
    lib::L2CValue::operator_(aLStack208,aLStack224);
    lib::L2CValue::operator_(pLVar6,aLStack192);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x18cdc1683);
    lib::L2CValue::operator_(pLVar6,(L2CValue *)&local_60);
  }
  else {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x18cdc1683);
    lib::L2CValue::operator_(aLStack112);
    lib::L2CValue::L2CValue(aLStack240,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack256,0x133cd818a0);
    uVar7 = lib::L2CValue::as_integer(aLStack240);
    uVar9 = lib::L2CValue::as_integer(aLStack256);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar7,uVar9);
    lib::L2CValue::L2CValue(aLStack224,fVar11);
    lib::L2CValue::operator_(aLStack208,aLStack224);
    lib::L2CValue::operator_(pLVar6,aLStack192);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x18cdc1683);
    lib::L2CValue::operator_(pLVar6,(L2CValue *)&local_60);
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack208);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x18cdc1683);
  this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x1fbdb2615);
  this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x162d277af);
  uVar12 = lib::L2CValue::as_number(pLVar6);
  uVar13 = lib::L2CValue::as_number(this_00);
  uVar14 = lib::L2CValue::as_number(this_01);
  local_60 = CONCAT44(uVar13,uVar12);
  uStack88 = (ulong)uVar14;
  app::lua_bind::PostureModule__set_rot_impl(*ppBVar10,(Vector3f *)&local_60,0);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
LAB_71000035e4:
  lib::L2CValue::L2CValue
            (aLStack112,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_S_WORK_FLAG_GUARD_OR_INVINCIBLE);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue
              (aLStack112,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_S_RUSH_WORK_INT_GUARD_BRAKE_COUNT);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar3);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack128,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack192,0xdcb0ea404);
    uVar7 = lib::L2CValue::as_integer(aLStack128);
    uVar9 = lib::L2CValue::as_integer(aLStack192);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar10,uVar7,uVar9);
    lib::L2CValue::L2CValue(aLStack112,iVar3);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack128);
    uVar7 = lib::L2CValue::operator_((L2CValue *)&local_60,aLStack112);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue
                (aLStack128,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_S_RUSH_WORK_INT_GUARD_BRAKE_COUNT);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::WorkModule__inc_int_impl(*ppBVar10,iVar3);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack192,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack208,0xf9e701518);
      uVar7 = lib::L2CValue::as_integer(aLStack192);
      uVar9 = lib::L2CValue::as_integer(aLStack208);
      fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar7,uVar9);
      lib::L2CValue::L2CValue(aLStack128,fVar11);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::L2CValue(aLStack208,FIGHTER_KINETIC_ENERGY_ID_MOTION);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
      fVar11 = (float)app::sv_kinetic_energy::get_speed_mul(this->luaStateAgent);
      lib::L2CValue::L2CValue(aLStack192,fVar11);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::L2CValue(aLStack208,FIGHTER_KINETIC_ENERGY_ID_MOTION);
      lib::L2CValue::operator_(aLStack192,aLStack128);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
      app::sv_kinetic_energy::set_speed_mul(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack128);
    }
    lib::L2CValue::L2CValue
              (aLStack128,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_S_WORK_FLAG_GUARD_OR_INVINCIBLE);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar3);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_S_RUSH_WORK_INT_FRAME);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
  lib::L2CValue::L2CValue(aLStack112,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_S_RUSH_WORK_INT_HIT_FRAME);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
  lib::L2CValue::L2CValue(aLStack128,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  uVar7 = lib::L2CValue::operator__(aLStack128,aLStack112);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_60,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_S_WORK_FLAG_HIT);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_S_RUSH_WORK_INT_FRAME);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__inc_int_impl(*ppBVar10,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue
            (aLStack208,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_S_RUSH_WORK_INT_GURAD_HIT_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack208);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
  lib::L2CValue::L2CValue(aLStack192,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
  uVar7 = lib::L2CValue::operator_((L2CValue *)&local_60,aLStack192);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack208);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_60,
               _FIGHTER_METAKNIGHT_STATUS_SPECIAL_S_RUSH_WORK_INT_GURAD_HIT_FRAME);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    app::lua_bind::WorkModule__dec_int_impl(*ppBVar10,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

