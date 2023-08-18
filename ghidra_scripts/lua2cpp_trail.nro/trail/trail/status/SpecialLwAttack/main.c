
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTrail::status::SpecialLwAttack_main(L2CFighterTrail *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  ulong uVar8;
  void *pvVar9;
  BattleObjectModuleAccessor *pBVar10;
  L2CValue *this_01;
  L2CValue *this_02;
  Hash40 HVar11;
  L2CValue *this_03;
  L2CValue *this_04;
  L2CValue *this_05;
  BattleObjectModuleAccessor **ppBVar12;
  float fVar13;
  long lVar14;
  L2CValue aLStack624 [16];
  L2CValue aLStack608 [16];
  L2CValue aLStack592 [16];
  L2CValue aLStack576 [16];
  L2CValue aLStack560 [16];
  L2CValue aLStack544 [16];
  L2CValue aLStack528 [16];
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  undefined auStack320 [32];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  undefined8 local_90;
  ulong uStack136;
  
  lib::L2CValue::L2CValue(aLStack176,0x11b7bf50dd);
  lib::L2CValue::L2CValue(aLStack192,0x15c1e2a4c2);
  lib::L2CValue::L2CValue(aLStack208,false);
  lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
            (this,(L2CValue)0x50,(L2CValue)0x40,(L2CValue)0x30);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  this_00 = &this->globalTable;
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
  lib::L2CValue::L2CValue(aLStack608,_FIGHTER_TRAIL_STATUS_KIND_SPECIAL_LW_REBOUND);
  uVar7 = lib::L2CValue::operator__(pLVar6,aLStack608);
  lib::L2CValue::_L2CValue(aLStack608);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_90,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack224,0x1a01512909);
    uVar7 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    uVar8 = lib::L2CValue::as_integer(aLStack224);
    fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar7,uVar8);
    lib::L2CValue::L2CValue(aLStack608,fVar13);
    lib::L2CValue::L2CValue(aLStack240,true);
    lib::L2CValue::L2CValue(aLStack256,true);
    fVar13 = (float)lib::L2CValue::as_number(aLStack608);
    bVar1 = lib::L2CValue::as_bool(aLStack240);
    bVar2 = lib::L2CValue::as_bool(aLStack256);
    app::lua_bind::MotionModule__set_frame_sync_anim_cmd_impl
              (this->moduleAccessor,fVar13,(bool)(bVar1 & 1),(bool)(bVar2 & 1),false);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack608);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  }
  lib::L2CValue::L2CValue(aLStack608,_FIGHTER_TRAIL_STATUS_SPECIAL_LW_FLOAT_ATTACK_POWER);
  iVar4 = lib::L2CValue::as_integer(aLStack608);
  ppBVar12 = &this->moduleAccessor;
  fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar12,iVar4);
  lib::L2CValue::L2CValue(aLStack224,fVar13);
  lib::L2CValue::_L2CValue(aLStack608);
  lib::L2CValue::L2CValue(aLStack608,0x1018dfb2f4);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,0xad0949135);
  uVar7 = lib::L2CValue::as_integer(aLStack608);
  uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar12,uVar7,uVar8);
  lib::L2CValue::L2CValue(aLStack240,fVar13);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue(aLStack608);
  lib::L2CValue::L2CValue(aLStack608,0x1018dfb2f4);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,0xad8edad44);
  uVar7 = lib::L2CValue::as_integer(aLStack608);
  uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar12,uVar7,uVar8);
  lib::L2CValue::L2CValue(aLStack256,fVar13);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue(aLStack608);
  lib::L2CValue::operator_(aLStack224,aLStack240);
  lib::L2CValue::operator_(aLStack224,aLStack608);
  lib::L2CValue::_L2CValue(aLStack608);
  uVar7 = lib::L2CValue::operator_(aLStack224,aLStack256);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::operator_(aLStack224,aLStack256);
  }
  lib::L2CValue::L2CValue(aLStack272,0.0);
  lib::L2CValue::L2CValue(aLStack288,_FIGHTER_TRAIL_STATUS_SPECIAL_LW_FLAG_IS_ATTACK_ENEMY);
  iVar4 = lib::L2CValue::as_integer(aLStack288);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack608,false);
  uVar7 = lib::L2CValue::operator__((L2CValue *)&local_90,aLStack608);
  lib::L2CValue::_L2CValue(aLStack608);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue(aLStack288);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_90,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack288,0x1474b9ee9b);
    uVar7 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    uVar8 = lib::L2CValue::as_integer(aLStack288);
    fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar12,uVar7,uVar8);
    lib::L2CValue::L2CValue(aLStack608,fVar13);
    lib::L2CValue::operator_(aLStack272,aLStack608);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_90,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack288,0xae4e0921d);
    uVar7 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    uVar8 = lib::L2CValue::as_integer(aLStack288);
    fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar12,uVar7,uVar8);
    lib::L2CValue::L2CValue(aLStack608,fVar13);
    lib::L2CValue::operator_(aLStack272,aLStack608);
  }
  lib::L2CValue::_L2CValue(aLStack608);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  uVar7 = lib::L2CValue::operator_(aLStack272,aLStack224);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::operator_(aLStack224,aLStack272);
  }
  lib::L2CValue::L2CValue(aLStack608,0.0);
  lib::L2CValue::operator_(aLStack224,aLStack608);
  lib::L2CValue::_L2CValue(aLStack608);
  lib::L2CValue::L2CValue(aLStack608,_FIGHTER_TRAIL_STATUS_SPECIAL_LW_FLOAT_ATTACK_POWER);
  fVar13 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
  iVar4 = lib::L2CValue::as_integer(aLStack608);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar12,fVar13,iVar4);
  lib::L2CValue::_L2CValue(aLStack608);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue(aLStack608,_FIGHTER_TRAIL_STATUS_SPECIAL_LW_FLAG_ATTACK_HIT);
  iVar4 = lib::L2CValue::as_integer(aLStack608);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar12,iVar4);
  lib::L2CValue::_L2CValue(aLStack608);
  lib::L2CValue::L2CValue(aLStack608,_FIGHTER_TRAIL_STATUS_SPECIAL_LW_FLAG_ATTACK_END);
  iVar4 = lib::L2CValue::as_integer(aLStack608);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar12,iVar4);
  lib::L2CValue::_L2CValue(aLStack608);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack608,_SITUATION_KIND_GROUND);
  uVar7 = lib::L2CValue::operator__(pLVar6,aLStack608);
  lib::L2CValue::_L2CValue(aLStack608);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack608,_FIGHTER_KINETIC_TYPE_MOTION_AIR);
    iVar4 = lib::L2CValue::as_integer(aLStack608);
    app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar12,iVar4);
    lib::L2CValue::_L2CValue(aLStack608);
    lib::L2CValue::L2CValue(aLStack608,FIGHTER_KINETIC_ENERGY_ID_MOTION);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
    lib::L2CValue::L2CValue(aLStack288,0.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack608);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_90);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
    app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  }
  else {
    lib::L2CValue::L2CValue(aLStack608,FIGHTER_KINETIC_TYPE_MOTION);
    iVar4 = lib::L2CValue::as_integer(aLStack608);
    app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar12,iVar4);
    lib::L2CValue::_L2CValue(aLStack608);
    lib::L2CValue::L2CValue(aLStack608,FIGHTER_KINETIC_ENERGY_ID_MOTION);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
    lib::L2CValue::L2CValue(aLStack288,0.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack608);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_90);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
    app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  }
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue(aLStack608);
  lib::L2CValue::L2CValue(aLStack608,_FIGHTER_TRAIL_STATUS_SPECIAL_LW_INT_TARGET_ID);
  iVar4 = lib::L2CValue::as_integer(aLStack608);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar12,iVar4);
  lib::L2CValue::L2CValue(aLStack288,iVar4);
  lib::L2CValue::_L2CValue(aLStack608);
  uVar5 = lib::L2CValue::as_integer(aLStack288);
  bVar1 = app::sv_battle_object::is_active(uVar5);
  lib::L2CValue::L2CValue(aLStack608,(bool)(bVar1 & 1));
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack608);
  lib::L2CValue::_L2CValue(aLStack608);
  if ((bVar3 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)auStack320,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack336,0x14dc8c2db2);
    uVar7 = lib::L2CValue::as_integer((L2CValue *)auStack320);
    uVar8 = lib::L2CValue::as_integer(aLStack336);
    fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar12,uVar7,uVar8);
    lib::L2CValue::L2CValue((L2CValue *)(auStack320 + 0x10),fVar13);
    lib::L2CValue::L2CValue(aLStack608,10.0);
    lib::L2CValue::operator_((L2CValue *)(auStack320 + 0x10),aLStack608);
    lib::L2CValue::_L2CValue(aLStack608);
    lib::L2CValue::operator_(aLStack256,(L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack320 + 0x10));
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue((L2CValue *)auStack320);
    lib::L2CValue::L2CValue((L2CValue *)auStack320,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack336,0x14e08112eb);
    uVar7 = lib::L2CValue::as_integer((L2CValue *)auStack320);
    uVar8 = lib::L2CValue::as_integer(aLStack336);
    fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar12,uVar7,uVar8);
    lib::L2CValue::L2CValue((L2CValue *)(auStack320 + 0x10),fVar13);
    lib::L2CValue::L2CValue(aLStack608,10.0);
    lib::L2CValue::operator_((L2CValue *)(auStack320 + 0x10),aLStack608);
    lib::L2CValue::_L2CValue(aLStack608);
    lib::L2CValue::operator_(aLStack272,(L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack320 + 0x10));
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue((L2CValue *)auStack320);
    uVar7 = lib::L2CValue::operator_(aLStack256,aLStack272);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)(auStack320 + 0x10),1.0);
      uVar5 = lib::L2CValue::as_integer(aLStack288);
      uVar5 = app::sv_battle_object::category(uVar5);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,uVar5 & 0xff);
      lib::L2CValue::L2CValue(aLStack608,_BATTLE_OBJECT_CATEGORY_FIGHTER);
      uVar7 = lib::L2CValue::operator__((L2CValue *)&local_90,aLStack608);
      lib::L2CValue::_L2CValue(aLStack608);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      if ((uVar7 & 1) != 0) {
        uVar5 = lib::L2CValue::as_integer(aLStack288);
        pvVar9 = (void *)app::sv_battle_object::module_accessor(uVar5);
        if (pvVar9 == (void *)0x0) {
          lib::L2CValue::L2CValue(aLStack608,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
        }
        else {
          lib::L2CValue::L2CValue(aLStack608,pvVar9);
        }
        pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack608);
        fVar13 = (float)app::lua_bind::PostureModule__pos_x_impl(pBVar10);
        lib::L2CValue::L2CValue(aLStack336,fVar13);
        fVar13 = (float)app::lua_bind::PostureModule__pos_x_impl(*ppBVar12);
        lib::L2CValue::L2CValue(aLStack368,fVar13);
        pLVar6 = aLStack368;
        lib::L2CValue::operator_(aLStack336,pLVar6);
        lib::L2CAgent::math_abs((L2CAgent *)auStack320,pLVar6);
        lib::L2CValue::L2CValue(aLStack384,aLStack256);
        lib::L2CValue::L2CValue(aLStack400,aLStack272);
        lua2cpp::L2CFighterBase::clamp(this,(L2CValue)0xa0,(L2CValue)0x80,(L2CValue)0x70);
        lib::L2CValue::_L2CValue(aLStack400);
        lib::L2CValue::_L2CValue(aLStack384);
        lib::L2CValue::_L2CValue(aLStack352);
        lib::L2CValue::_L2CValue((L2CValue *)auStack320);
        lib::L2CValue::_L2CValue(aLStack368);
        lib::L2CValue::_L2CValue(aLStack336);
        lib::L2CValue::L2CValue(aLStack336,0x1018dfb2f4);
        lib::L2CValue::L2CValue(aLStack368,0x176fbc97fa);
        uVar7 = lib::L2CValue::as_integer(aLStack336);
        uVar8 = lib::L2CValue::as_integer(aLStack368);
        fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar12,uVar7,uVar8);
        lib::L2CValue::L2CValue(aLStack416,fVar13);
        lib::L2CValue::L2CValue(aLStack448,0x1018dfb2f4);
        lib::L2CValue::L2CValue(aLStack464,0x1753b1a8a3);
        uVar7 = lib::L2CValue::as_integer(aLStack448);
        uVar8 = lib::L2CValue::as_integer(aLStack464);
        fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar12,uVar7,uVar8);
        lib::L2CValue::L2CValue(aLStack432,fVar13);
        lib::L2CValue::operator_((L2CValue *)&local_90,aLStack256);
        lib::L2CValue::operator_(aLStack272,aLStack256);
        lib::L2CValue::operator_(aLStack496,aLStack512);
        lua2cpp::L2CFighterBase::lerp(this,(L2CValue)0x60,(L2CValue)0x50,(L2CValue)0x20);
        lib::L2CValue::operator_((L2CValue *)(auStack320 + 0x10),(L2CValue *)auStack320);
        lib::L2CValue::_L2CValue((L2CValue *)auStack320);
        lib::L2CValue::_L2CValue(aLStack480);
        lib::L2CValue::_L2CValue(aLStack512);
        lib::L2CValue::_L2CValue(aLStack496);
        lib::L2CValue::_L2CValue(aLStack432);
        lib::L2CValue::_L2CValue(aLStack464);
        lib::L2CValue::_L2CValue(aLStack448);
        lib::L2CValue::_L2CValue(aLStack416);
        lib::L2CValue::_L2CValue(aLStack368);
        lib::L2CValue::_L2CValue(aLStack336);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        lib::L2CValue::_L2CValue(aLStack608);
      }
      lib::L2CValue::L2CValue((L2CValue *)auStack320,_FIGHTER_TRAIL_STATUS_SPECIAL_LW_FLAG_DIRECT);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack320);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar12,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack608,false);
      uVar7 = lib::L2CValue::operator__((L2CValue *)&local_90,aLStack608);
      lib::L2CValue::_L2CValue(aLStack608);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue((L2CValue *)auStack320);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack528,0.0);
        lib::L2CValue::L2CValue(aLStack544,0.0);
        lib::L2CValue::L2CValue(aLStack560,0.0);
        lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0xf0,(L2CValue)0xe0,(L2CValue)0xd0);
        lib::L2CValue::_L2CValue(aLStack560);
        lib::L2CValue::_L2CValue(aLStack544);
        lib::L2CValue::_L2CValue(aLStack528);
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack320,0x18cdc1683);
        this_01 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack320,0x1fbdb2615);
        this_02 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack320,0x162d277af);
        HVar11 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar12);
        lib::L2CValue::L2CValue(aLStack336,HVar11);
        this_03 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack320,0x18cdc1683);
        this_04 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack320,0x1fbdb2615);
        this_05 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack320,0x162d277af);
        HVar11 = lib::L2CValue::as_hash(aLStack336);
        uVar7 = lib::L2CValue::as_number(this_03);
        lVar14 = lib::L2CValue::as_number(this_04);
        uVar5 = lib::L2CValue::as_number(this_05);
        local_90 = uVar7 & 0xffffffff | lVar14 << 0x20;
        uStack136 = (ulong)uVar5;
        app::lua_bind::MotionModule__trans_tra_end_frame_impl
                  (*ppBVar12,HVar11,(Vector3f *)&local_90);
        lib::L2CValue::L2CValue(aLStack608,(float)local_90);
        lib::L2CValue::L2CValue(aLStack592,local_90._4_4_);
        lib::L2CValue::L2CValue(aLStack576,(float)uStack136);
        lib::L2CValue::operator_(pLVar6,aLStack608);
        lib::L2CValue::operator_(this_01,aLStack592);
        lib::L2CValue::operator_(this_02,aLStack576);
        lib::L2CValue::_L2CValue(aLStack576);
        lib::L2CValue::_L2CValue(aLStack592);
        lib::L2CValue::_L2CValue(aLStack608);
        lib::L2CValue::_L2CValue(aLStack336);
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack320,0x162d277af);
        lib::L2CValue::operator_(aLStack256,pLVar6);
        lib::L2CValue::operator_((L2CValue *)(auStack320 + 0x10),aLStack608);
        lib::L2CValue::_L2CValue(aLStack608);
        lib::L2CValue::_L2CValue((L2CValue *)auStack320);
      }
      lib::L2CValue::L2CValue(aLStack608,FIGHTER_KINETIC_ENERGY_ID_MOTION);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack608);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)(auStack320 + 0x10));
      app::sv_kinetic_energy::set_speed_mul(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack608);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack320 + 0x10));
    }
  }
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack608,SITUATION_KIND_AIR);
  uVar7 = lib::L2CValue::operator__(pLVar6,aLStack608);
  lib::L2CValue::_L2CValue(aLStack608);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack608,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    iVar4 = lib::L2CValue::as_integer(aLStack608);
    app::lua_bind::KineticModule__enable_energy_impl(*ppBVar12,iVar4);
    lib::L2CValue::_L2CValue(aLStack608);
  }
  lib::L2CValue::L2CValue(aLStack624,&DAT_710001f9c0);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x90);
  lib::L2CValue::_L2CValue(aLStack624);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  return;
}

