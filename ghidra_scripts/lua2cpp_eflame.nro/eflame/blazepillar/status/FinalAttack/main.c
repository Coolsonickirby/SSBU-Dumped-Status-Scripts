
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponEflameBlazepillar::status::FinalAttack_main
          (L2CWeaponEflameBlazepillar *this,L2CValue *return_value)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  ulong uVar5;
  float *pfVar6;
  L2CValue *pLVar7;
  ulong uVar8;
  L2CValue *pLVar9;
  L2CValue *this_00;
  L2CValue *this_01;
  L2CAgent *this_02;
  L2CValue *pLVar10;
  Hash40 HVar11;
  L2CValue *pLVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
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
  L2CValue aLStack240 [16];
  ulong local_e0;
  undefined8 uStack216;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  
  lib::L2CValue::L2CValue(aLStack368,GROUND_TOUCH_FLAG_DOWN);
  uVar2 = lib::L2CValue::as_integer(aLStack368);
  bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar2);
  lib::L2CValue::L2CValue(aLStack288,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_e0,false);
  uVar5 = lib::L2CValue::operator__(aLStack288,(L2CValue *)&local_e0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack368);
  if ((uVar5 & 1) != 0) {
    uVar16 = app::lua_bind::PostureModule__pos_2d_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack368,(float)uVar16);
    lib::L2CValue::L2CValue(aLStack352,(float)((ulong)uVar16 >> 0x20));
    lib::L2CValue::L2CValue((L2CValue *)&local_e0,aLStack368);
    lib::L2CValue::L2CValue(aLStack288,aLStack352);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x20,(L2CValue)0xe0);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack368);
    pfVar6 = (float *)app::lua_bind::GroundModule__get_shape_safe_pos_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack416,*pfVar6);
    lib::L2CValue::L2CValue(aLStack400,pfVar6[1]);
    lib::L2CValue::L2CValue((L2CValue *)&local_e0,aLStack416);
    lib::L2CValue::L2CValue(aLStack288,aLStack400);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x20,(L2CValue)0xe0);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
    lib::L2CValue::_L2CValue(aLStack400);
    lib::L2CValue::_L2CValue(aLStack416);
    lib::L2CValue::L2CValue(aLStack432);
    lib::L2CValue::L2CValue(aLStack128,_WEAPON_EFLAME_BLAZEPILLAR_INSTANCE_WORK_ID_FLAG_AIR);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack288,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_e0,true);
    uVar5 = lib::L2CValue::operator__(aLStack288,(L2CValue *)&local_e0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_e0,0x10abcd7e1f);
      lib::L2CValue::operator_(aLStack432,(L2CValue *)&local_e0);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_e0,0x14984e70f1);
      lib::L2CValue::operator_(aLStack432,(L2CValue *)&local_e0);
    }
    lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack336,0x18cdc1683);
    lib::L2CValue::L2CValue(aLStack464,pLVar7);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack336,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack480,pLVar7);
    lib::L2CValue::L2CValue(aLStack528,0x1183ffc1e9);
    uVar5 = lib::L2CValue::as_integer(aLStack528);
    uVar8 = lib::L2CValue::as_integer(aLStack432);
    fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar5,uVar8);
    lib::L2CValue::L2CValue(aLStack512,fVar13);
    lib::L2CValue::operator_(aLStack512);
    lib::L2CValue::L2CValue(aLStack160,0.0);
    lib::L2CValue::L2CValue(aLStack176,aLStack496);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x60,(L2CValue)0x50);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    bVar1 = app::lua_bind::BattleObjectWorld__is_gravity_normal_impl(LUA_SCRIPT_LINE_SYSTEM_POST);
    lib::L2CValue::L2CValue(aLStack288,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_e0,false);
    uVar5 = lib::L2CValue::operator__(aLStack288,(L2CValue *)&local_e0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
    lib::L2CValue::_L2CValue(aLStack288);
    if ((uVar5 & 1) != 0) {
      pfVar6 = (float *)app::lua_bind::BattleObjectWorld__gravity_pos_impl
                                  (LUA_SCRIPT_LINE_SYSTEM_POST);
      lib::L2CValue::L2CValue((L2CValue *)&local_e0,*pfVar6);
      lib::L2CValue::L2CValue(aLStack208,pfVar6[1]);
      lib::L2CValue::L2CValue(aLStack288,(L2CValue *)&local_e0);
      lib::L2CValue::L2CValue(aLStack128,aLStack208);
      lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xe0,(L2CValue)0x80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x18cdc1683);
      lib::L2CValue::operator_(aLStack464,pLVar7);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x1fbdb2615);
      lib::L2CValue::operator_(aLStack480,pLVar7);
      pLVar12 = aLStack256;
      lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x10,(L2CValue)0x0);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack240);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x18cdc1683);
      pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x1fbdb2615);
      this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x18cdc1683);
      this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x1fbdb2615);
      this_02 = (L2CAgent *)lib::L2CValue::operator__(aLStack128,0x18cdc1683);
      pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x1fbdb2615);
      lib::L2CAgent::math_atan(this_02,pLVar10,pLVar12);
      lib::L2CValue::operator_(aLStack320);
      fVar13 = (float)lib::L2CValue::as_number(this_00);
      fVar14 = (float)lib::L2CValue::as_number(this_01);
      fVar15 = (float)lib::L2CValue::as_number(aLStack304);
      uVar16 = app::sv_math::vec2_rot(fVar13,fVar14,fVar15);
      lib::L2CValue::L2CValue(aLStack288,(float)uVar16);
      lib::L2CValue::L2CValue(aLStack272,(float)((ulong)uVar16 >> 0x20));
      lib::L2CValue::operator_(pLVar7,aLStack288);
      lib::L2CValue::operator_(pLVar9,aLStack272);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack192);
    }
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x18cdc1683);
    lib::L2CValue::operator_(pLVar7,aLStack464);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x18cdc1683);
    lib::L2CValue::operator_(pLVar7,aLStack288);
    lib::L2CValue::_L2CValue(aLStack288);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x1fbdb2615);
    lib::L2CValue::operator_(pLVar7,aLStack480);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x1fbdb2615);
    lib::L2CValue::operator_(pLVar7,aLStack288);
    lib::L2CValue::_L2CValue(aLStack288);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x18cdc1683);
    lib::L2CValue::L2CValue(aLStack288,pLVar7);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack272,pLVar7);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::L2CValue((L2CValue *)&local_e0,aLStack288);
    lib::L2CValue::L2CValue(aLStack128,aLStack272);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x20,(L2CValue)0x80);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack496);
    lib::L2CValue::_L2CValue(aLStack512);
    lib::L2CValue::_L2CValue(aLStack528);
    lib::L2CValue::_L2CValue(aLStack480);
    lib::L2CValue::_L2CValue(aLStack464);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack448,0x18cdc1683);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack448,0x1fbdb2615);
    uVar5 = lib::L2CValue::as_number(pLVar7);
    uVar2 = lib::L2CValue::as_number(pLVar9);
    local_e0 = uVar5 & 0xffffffff | (ulong)uVar2 << 0x20;
    uStack216 = 0;
    app::lua_bind::PostureModule__set_pos_2d_impl(this->moduleAccessor,(Vector2f *)&local_e0);
    app::lua_bind::GroundModule__update_force_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)&local_e0,true);
    bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_e0);
    app::lua_bind::GroundModule__set_test_coll_stop_impl(this->moduleAccessor,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
    app::lua_bind::GroundModule__test_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack144,GROUND_TOUCH_FLAG_DOWN);
    uVar2 = lib::L2CValue::as_integer(aLStack144);
    bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar2);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_e0,true);
    uVar5 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&local_e0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar5 & 1) == 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack384,0x18cdc1683);
      pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack384,0x1fbdb2615);
      uVar5 = lib::L2CValue::as_number(pLVar7);
      uVar2 = lib::L2CValue::as_number(pLVar9);
      local_e0 = uVar5 & 0xffffffff | (ulong)uVar2 << 0x20;
      uStack216 = 0;
      app::lua_bind::GroundModule__set_shape_safe_pos_impl
                (this->moduleAccessor,(Vector2f *)&local_e0);
    }
    else {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack336,0x18cdc1683);
      pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack336,0x1fbdb2615);
      uVar16 = app::lua_bind::GroundModule__get_correct_pos_local_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue((L2CValue *)&local_e0,(float)uVar16);
      lib::L2CValue::L2CValue(aLStack208,(float)((ulong)uVar16 >> 0x20));
      lib::L2CValue::operator_(pLVar7,(L2CValue *)&local_e0);
      lib::L2CValue::operator_(pLVar9,aLStack208);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
      lib::L2CValue::L2CValue(aLStack128,_SITUATION_KIND_GROUND);
      lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0x80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue((L2CValue *)&local_e0,GROUND_CORRECT_KIND_GROUND);
      GVar4 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
      app::lua_bind::GroundModule__set_correct_impl(this->moduleAccessor,GVar4);
      lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
    }
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack336,0x18cdc1683);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack336,0x1fbdb2615);
    uVar5 = lib::L2CValue::as_number(pLVar7);
    uVar2 = lib::L2CValue::as_number(pLVar9);
    local_e0 = uVar5 & 0xffffffff | (ulong)uVar2 << 0x20;
    uStack216 = 0;
    app::lua_bind::PostureModule__set_pos_2d_impl(this->moduleAccessor,(Vector2f *)&local_e0);
    lib::L2CValue::_L2CValue(aLStack448);
    lib::L2CValue::_L2CValue(aLStack432);
    lib::L2CValue::_L2CValue(aLStack384);
    lib::L2CValue::_L2CValue(aLStack336);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_e0,0xcb7cea62c);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  lib::L2CValue::L2CValue(aLStack160,1.0);
  lib::L2CValue::L2CValue(aLStack176,false);
  HVar11 = lib::L2CValue::as_hash((L2CValue *)&local_e0);
  fVar13 = (float)lib::L2CValue::as_number(aLStack144);
  fVar14 = (float)lib::L2CValue::as_number(aLStack160);
  bVar1 = lib::L2CValue::as_bool(aLStack176);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar11,fVar13,fVar14,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
  lib::L2CValue::L2CValue((L2CValue *)&local_e0,_WEAPON_INSTANCE_WORK_ID_FLAG_WARP_AREA_CHECK);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
  lib::L2CValue::L2CValue((L2CValue *)&local_e0,_WEAPON_INSTANCE_WORK_ID_FLAG_NO_DEAD);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_e0);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
  lib::L2CValue::L2CValue((L2CValue *)&local_e0,FinalAttack_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0x20);
  lib::L2CValue::_L2CValue((L2CValue *)&local_e0);
  return;
}

