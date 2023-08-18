
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponDollyBurst::status::Regular_main(L2CWeaponDollyBurst *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  GroundCorrectKind GVar5;
  ulong uVar6;
  float *pfVar7;
  L2CValue *pLVar8;
  ulong uVar9;
  L2CValue *pLVar10;
  L2CValue *this_00;
  L2CValue *this_01;
  L2CAgent *this_02;
  L2CValue *pLVar11;
  long lVar12;
  Hash40 HVar13;
  L2CValue *pLVar14;
  BattleObjectModuleAccessor **ppBVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
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
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  ulong local_f0;
  undefined8 uStack232;
  L2CValue aLStack224 [24];
  L2CValue aLStack200 [16];
  L2CValue aLStack184 [16];
  L2CValue aLStack168 [16];
  L2CValue aLStack152 [16];
  L2CValue aLStack136 [24];
  
  lib::L2CValue::L2CValue(aLStack384,GROUND_TOUCH_FLAG_DOWN);
  uVar3 = lib::L2CValue::as_integer(aLStack384);
  ppBVar15 = &this->moduleAccessor;
  bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar15,uVar3);
  lib::L2CValue::L2CValue(aLStack304,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_f0,false);
  uVar6 = lib::L2CValue::operator__(aLStack304,(L2CValue *)&local_f0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack384);
  if ((uVar6 & 1) != 0) {
    uVar19 = app::lua_bind::PostureModule__pos_2d_impl(*ppBVar15);
    lib::L2CValue::L2CValue(aLStack384,(float)uVar19);
    lib::L2CValue::L2CValue(aLStack368,(float)((ulong)uVar19 >> 0x20));
    lib::L2CValue::L2CValue((L2CValue *)&local_f0,aLStack384);
    lib::L2CValue::L2CValue(aLStack304,aLStack368);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x10,(L2CValue)0xd0);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack384);
    pfVar7 = (float *)app::lua_bind::GroundModule__get_shape_safe_pos_impl(*ppBVar15);
    lib::L2CValue::L2CValue(aLStack432,*pfVar7);
    lib::L2CValue::L2CValue(aLStack416,pfVar7[1]);
    lib::L2CValue::L2CValue((L2CValue *)&local_f0,aLStack432);
    lib::L2CValue::L2CValue(aLStack304,aLStack416);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x10,(L2CValue)0xd0);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
    lib::L2CValue::_L2CValue(aLStack416);
    lib::L2CValue::_L2CValue(aLStack432);
    lib::L2CValue::L2CValue(aLStack448);
    lib::L2CValue::L2CValue(aLStack136,_WEAPON_DOLLY_BURST_INSTANCE_WORK_ID_FLAG_AIR);
    iVar4 = lib::L2CValue::as_integer(aLStack136);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar15,iVar4);
    lib::L2CValue::L2CValue(aLStack304,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_f0,true);
    uVar6 = lib::L2CValue::operator__(aLStack304,(L2CValue *)&local_f0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack136);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_f0,0x10abcd7e1f);
      lib::L2CValue::operator_(aLStack448,(L2CValue *)&local_f0);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_f0,0x14984e70f1);
      lib::L2CValue::operator_(aLStack448,(L2CValue *)&local_f0);
    }
    lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack352,0x18cdc1683);
    lib::L2CValue::L2CValue(aLStack480,pLVar8);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack352,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack496,pLVar8);
    lib::L2CValue::L2CValue(aLStack544,0xbc531078d);
    uVar6 = lib::L2CValue::as_integer(aLStack544);
    uVar9 = lib::L2CValue::as_integer(aLStack448);
    fVar16 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar15,uVar6,uVar9);
    lib::L2CValue::L2CValue(aLStack528,fVar16);
    lib::L2CValue::operator_(aLStack528);
    lib::L2CValue::L2CValue(aLStack168,0.0);
    lib::L2CValue::L2CValue(aLStack184,aLStack512);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x58,(L2CValue)0x48);
    lib::L2CValue::_L2CValue(aLStack184);
    lib::L2CValue::_L2CValue(aLStack168);
    bVar1 = app::lua_bind::BattleObjectWorld__is_gravity_normal_impl(FIGHTER_STATUS_KIND_SPECIAL_LW)
    ;
    lib::L2CValue::L2CValue(aLStack304,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_f0,false);
    uVar6 = lib::L2CValue::operator__(aLStack304,(L2CValue *)&local_f0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
    lib::L2CValue::_L2CValue(aLStack304);
    if ((uVar6 & 1) != 0) {
      pfVar7 = (float *)app::lua_bind::BattleObjectWorld__gravity_pos_impl
                                  (FIGHTER_STATUS_KIND_SPECIAL_LW);
      lib::L2CValue::L2CValue((L2CValue *)&local_f0,*pfVar7);
      lib::L2CValue::L2CValue(aLStack224,pfVar7[1]);
      lib::L2CValue::L2CValue(aLStack304,(L2CValue *)&local_f0);
      lib::L2CValue::L2CValue(aLStack136,aLStack224);
      lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xd0,(L2CValue)0x78);
      lib::L2CValue::_L2CValue(aLStack136);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
      pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack200,0x18cdc1683);
      lib::L2CValue::operator_(aLStack480,pLVar8);
      pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack200,0x1fbdb2615);
      lib::L2CValue::operator_(aLStack496,pLVar8);
      pLVar14 = aLStack272;
      lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x0,SUB81(pLVar14,0));
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack256);
      pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack152,0x18cdc1683);
      pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack152,0x1fbdb2615);
      this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack152,0x18cdc1683);
      this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack152,0x1fbdb2615);
      this_02 = (L2CAgent *)lib::L2CValue::operator__(aLStack136,0x18cdc1683);
      pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack136,0x1fbdb2615);
      lib::L2CAgent::math_atan(this_02,pLVar11,pLVar14);
      lib::L2CValue::operator_(aLStack336);
      fVar16 = (float)lib::L2CValue::as_number(this_00);
      fVar17 = (float)lib::L2CValue::as_number(this_01);
      fVar18 = (float)lib::L2CValue::as_number(aLStack320);
      uVar19 = app::sv_math::vec2_rot(fVar16,fVar17,fVar18);
      lib::L2CValue::L2CValue(aLStack304,(float)uVar19);
      lib::L2CValue::L2CValue(aLStack288,(float)((ulong)uVar19 >> 0x20));
      lib::L2CValue::operator_(pLVar8,aLStack304);
      lib::L2CValue::operator_(pLVar10,aLStack288);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue(aLStack136);
      lib::L2CValue::_L2CValue(aLStack200);
    }
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack152,0x18cdc1683);
    lib::L2CValue::operator_(pLVar8,aLStack480);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack152,0x18cdc1683);
    lib::L2CValue::operator_(pLVar8,aLStack304);
    lib::L2CValue::_L2CValue(aLStack304);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack152,0x1fbdb2615);
    lib::L2CValue::operator_(pLVar8,aLStack496);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack152,0x1fbdb2615);
    lib::L2CValue::operator_(pLVar8,aLStack304);
    lib::L2CValue::_L2CValue(aLStack304);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack152,0x18cdc1683);
    lib::L2CValue::L2CValue(aLStack304,pLVar8);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack152,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack288,pLVar8);
    lib::L2CValue::_L2CValue(aLStack152);
    lib::L2CValue::L2CValue((L2CValue *)&local_f0,aLStack304);
    lib::L2CValue::L2CValue(aLStack136,aLStack288);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x10,(L2CValue)0x78);
    lib::L2CValue::_L2CValue(aLStack136);
    lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack512);
    lib::L2CValue::_L2CValue(aLStack528);
    lib::L2CValue::_L2CValue(aLStack544);
    lib::L2CValue::_L2CValue(aLStack496);
    lib::L2CValue::_L2CValue(aLStack480);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack464,0x18cdc1683);
    pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack464,0x1fbdb2615);
    uVar6 = lib::L2CValue::as_number(pLVar8);
    uVar3 = lib::L2CValue::as_number(pLVar10);
    local_f0 = uVar6 & 0xffffffff | (ulong)uVar3 << 0x20;
    uStack232 = 0;
    app::lua_bind::PostureModule__set_pos_2d_impl(*ppBVar15,(Vector2f *)&local_f0);
    app::lua_bind::GroundModule__update_force_impl(*ppBVar15);
    lib::L2CValue::L2CValue((L2CValue *)&local_f0,true);
    bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_f0);
    app::lua_bind::GroundModule__set_test_coll_stop_impl(*ppBVar15,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
    app::lua_bind::GroundModule__test_impl(*ppBVar15);
    lib::L2CValue::L2CValue(aLStack152,GROUND_TOUCH_FLAG_DOWN);
    uVar3 = lib::L2CValue::as_integer(aLStack152);
    bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar15,uVar3);
    lib::L2CValue::L2CValue(aLStack136,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_f0,true);
    uVar6 = lib::L2CValue::operator__(aLStack136,(L2CValue *)&local_f0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
    lib::L2CValue::_L2CValue(aLStack136);
    lib::L2CValue::_L2CValue(aLStack152);
    if ((uVar6 & 1) == 0) {
      pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack400,0x18cdc1683);
      pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack400,0x1fbdb2615);
      uVar6 = lib::L2CValue::as_number(pLVar8);
      uVar3 = lib::L2CValue::as_number(pLVar10);
      local_f0 = uVar6 & 0xffffffff | (ulong)uVar3 << 0x20;
      uStack232 = 0;
      app::lua_bind::GroundModule__set_shape_safe_pos_impl(*ppBVar15,(Vector2f *)&local_f0);
    }
    else {
      pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack352,0x18cdc1683);
      pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack352,0x1fbdb2615);
      uVar19 = app::lua_bind::GroundModule__get_correct_pos_local_impl(*ppBVar15);
      lib::L2CValue::L2CValue((L2CValue *)&local_f0,(float)uVar19);
      lib::L2CValue::L2CValue(aLStack224,(float)((ulong)uVar19 >> 0x20));
      lib::L2CValue::operator_(pLVar8,(L2CValue *)&local_f0);
      lib::L2CValue::operator_(pLVar10,aLStack224);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
      lib::L2CValue::L2CValue(aLStack136,_SITUATION_KIND_GROUND);
      lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0x78);
      lib::L2CValue::_L2CValue(aLStack136);
      lib::L2CValue::L2CValue((L2CValue *)&local_f0,GROUND_CORRECT_KIND_GROUND);
      GVar5 = lib::L2CValue::as_integer((L2CValue *)&local_f0);
      app::lua_bind::GroundModule__set_correct_impl(*ppBVar15,GVar5);
      lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
    }
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack352,0x18cdc1683);
    pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack352,0x1fbdb2615);
    uVar6 = lib::L2CValue::as_number(pLVar8);
    uVar3 = lib::L2CValue::as_number(pLVar10);
    local_f0 = uVar6 & 0xffffffff | (ulong)uVar3 << 0x20;
    uStack232 = 0;
    app::lua_bind::PostureModule__set_pos_2d_impl(*ppBVar15,(Vector2f *)&local_f0);
    lib::L2CValue::_L2CValue(aLStack464);
    lib::L2CValue::_L2CValue(aLStack448);
    lib::L2CValue::_L2CValue(aLStack400);
    lib::L2CValue::_L2CValue(aLStack352);
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_f0,_WEAPON_DOLLY_BURST_INSTANCE_WORK_ID_INT_MOTION_KIND);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_f0);
  lVar12 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar15,iVar4);
  lib::L2CValue::L2CValue(aLStack152,lVar12);
  lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
  lib::L2CValue::L2CValue((L2CValue *)&local_f0,0.0);
  lib::L2CValue::L2CValue(aLStack168,1.0);
  lib::L2CValue::L2CValue(aLStack184,false);
  HVar13 = lib::L2CValue::as_hash(aLStack152);
  fVar16 = (float)lib::L2CValue::as_number((L2CValue *)&local_f0);
  fVar17 = (float)lib::L2CValue::as_number(aLStack168);
  bVar1 = lib::L2CValue::as_bool(aLStack184);
  app::lua_bind::MotionModule__change_motion_impl
            (*ppBVar15,HVar13,fVar16,fVar17,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack184);
  lib::L2CValue::_L2CValue(aLStack168);
  lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
  bVar1 = app::lua_bind::StopModule__is_stop_impl(*ppBVar15);
  lib::L2CValue::L2CValue(aLStack168,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_f0,false);
  uVar6 = lib::L2CValue::operator__(aLStack168,(L2CValue *)&local_f0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
  lib::L2CValue::_L2CValue(aLStack168);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack184,false);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack184);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_f0,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_f0);
      app::lua_bind::WorkModule__dec_int_impl(*ppBVar15,iVar4);
      lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
    }
    lib::L2CValue::L2CValue(aLStack168,0);
    lib::L2CValue::_L2CValue(aLStack168);
    lib::L2CValue::_L2CValue(aLStack184);
  }
  pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x15);
  lib::L2CValue::L2CValue((L2CValue *)&local_f0,&DAT_7100031500);
  lib::L2CValue::operator_(pLVar8,(L2CValue *)&local_f0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
  lib::L2CValue::L2CValue((L2CValue *)&local_f0,0xdfe1bd74f);
  uVar6 = lib::L2CValue::operator__(aLStack152,(L2CValue *)&local_f0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_f0,_WEAPON_INSTANCE_WORK_ID_FLAG_WARP_AREA_CHECK);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_f0);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar15,iVar4);
    lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
    lib::L2CValue::L2CValue((L2CValue *)&local_f0,_WEAPON_INSTANCE_WORK_ID_FLAG_NO_DEAD);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_f0);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar15,iVar4);
    lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_f0,Regular_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0x10);
  lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
  lib::L2CValue::_L2CValue(aLStack152);
  return;
}

