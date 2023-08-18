
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterJack::status::SpecialHiPull_main(L2CFighterJack *this,L2CValue *return_value)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  L2CValue *pLVar6;
  L2CValue *pLVar7;
  L2CValue *pLVar8;
  L2CValue *pLVar9;
  L2CValue *pLVar10;
  Hash40 HVar11;
  ulong uVar12;
  L2CValue *this_00;
  L2CValue *this_01;
  L2CValue *this_02;
  uint uVar13;
  float fVar14;
  long lVar15;
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
  ulong local_1a0;
  ulong uStack408;
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
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  ulong local_a0;
  ulong uStack152;
  undefined8 local_90;
  ulong uStack136;
  
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_1a0,_FIGHTER_JACK_STATUS_SPECIAL_HI_INT_TARGET_OBJECT_CATEGORY);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_1a0);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack176,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1a0);
  lib::L2CValue::L2CValue((L2CValue *)&local_1a0,_BATTLE_OBJECT_CATEGORY_FIGHTER);
  uVar4 = lib::L2CValue::operator__(aLStack176,(L2CValue *)&local_1a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1a0);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack192,true);
    lib::L2CValue::L2CValue(aLStack208,0xfdcc8841e);
    lib::L2CValue::L2CValue(aLStack224,0x13d75109ca);
    FUN_7100008540(this,aLStack192,aLStack208,aLStack224);
  }
  else {
    lib::L2CValue::L2CValue(aLStack192,true);
    lib::L2CValue::L2CValue(aLStack208,0x118ab9a6ca);
    lib::L2CValue::L2CValue(aLStack224,0x15fce452d5);
    FUN_7100008540(this,aLStack192,aLStack208,aLStack224);
  }
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue((L2CValue *)&local_1a0,BATTLE_OBJECT_CATEGORY_INVALID);
  uVar4 = lib::L2CValue::operator__(aLStack176,(L2CValue *)&local_1a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1a0);
  if ((uVar4 & 1) != 0) goto LAB_7100013cc0;
  lib::L2CValue::L2CValue(aLStack256,0.0);
  lib::L2CValue::L2CValue(aLStack272,0.0);
  lib::L2CValue::L2CValue(aLStack288,0.0);
  lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x0,(L2CValue)0xf0,(L2CValue)0xe0);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::L2CValue(aLStack320,0.0);
  lib::L2CValue::L2CValue(aLStack336,0.0);
  lib::L2CValue::L2CValue(aLStack352,0.0);
  lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0xc0,(L2CValue)0xb0,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::L2CValue(aLStack368);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x18cdc1683);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x1fbdb2615);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x162d277af);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x5e008fd84);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x18cdc1683);
  pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x1fbdb2615);
  pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x162d277af);
  HVar11 = lib::L2CValue::as_hash((L2CValue *)&local_a0);
  uVar4 = lib::L2CValue::as_number(pLVar8);
  lVar15 = lib::L2CValue::as_number(pLVar9);
  uVar13 = lib::L2CValue::as_number(pLVar10);
  local_90 = uVar4 & 0xffffffff | lVar15 << 0x20;
  uStack136 = (ulong)uVar13;
  app::lua_bind::ModelModule__joint_global_position_impl
            (this->moduleAccessor,HVar11,(Vector3f *)&local_90,true);
  lib::L2CValue::L2CValue((L2CValue *)&local_1a0,(float)local_90);
  lib::L2CValue::L2CValue(aLStack400,local_90._4_4_);
  lib::L2CValue::L2CValue(aLStack384,(float)uStack136);
  lib::L2CValue::operator_(pLVar5,(L2CValue *)&local_1a0);
  lib::L2CValue::operator_(pLVar6,aLStack400);
  lib::L2CValue::operator_(pLVar7,aLStack384);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x18cdc1683);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x1fbdb2615);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x162d277af);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x54f934137);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x18cdc1683);
  pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x1fbdb2615);
  pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x162d277af);
  HVar11 = lib::L2CValue::as_hash((L2CValue *)&local_a0);
  uVar4 = lib::L2CValue::as_number(pLVar8);
  lVar15 = lib::L2CValue::as_number(pLVar9);
  uVar13 = lib::L2CValue::as_number(pLVar10);
  local_90 = uVar4 & 0xffffffff | lVar15 << 0x20;
  uStack136 = (ulong)uVar13;
  app::lua_bind::ModelModule__joint_global_position_impl
            (this->moduleAccessor,HVar11,(Vector3f *)&local_90,true);
  lib::L2CValue::L2CValue((L2CValue *)&local_1a0,(float)local_90);
  lib::L2CValue::L2CValue(aLStack400,local_90._4_4_);
  lib::L2CValue::L2CValue(aLStack384,(float)uStack136);
  lib::L2CValue::operator_(pLVar5,(L2CValue *)&local_1a0);
  lib::L2CValue::operator_(pLVar6,aLStack400);
  lib::L2CValue::operator_(pLVar7,aLStack384);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x18cdc1683);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x18cdc1683);
  lib::L2CValue::operator_(pLVar5,pLVar6);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x1fbdb2615);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x1fbdb2615);
  lib::L2CValue::operator_(pLVar5,pLVar6);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x162d277af);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x162d277af);
  lib::L2CValue::operator_(pLVar5,pLVar6);
  lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x40,(L2CValue)0x30,(L2CValue)0x20);
  lib::L2CValue::_L2CValue(aLStack480);
  lib::L2CValue::_L2CValue(aLStack464);
  lib::L2CValue::_L2CValue(aLStack448);
  lib::L2CValue::L2CValue(aLStack512,aLStack432);
  lua2cpp::L2CFighterBase::Vector3__length(this,(L2CValue)0x0);
  lib::L2CValue::_L2CValue(aLStack512);
  lib::L2CValue::L2CValue((L2CValue *)&local_1a0,_FIGHTER_JACK_STATUS_SPECIAL_HI_FLOAT_TARGET_X);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_1a0);
  fVar14 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack544,fVar14);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,_FIGHTER_JACK_STATUS_SPECIAL_HI_FLOAT_TARGET_Y);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  fVar14 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack560,fVar14);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,_FIGHTER_JACK_STATUS_SPECIAL_HI_FLOAT_TARGET_Z);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  fVar14 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack576,fVar14);
  lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0xe0,(L2CValue)0xd0,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack576);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::_L2CValue(aLStack560);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue(aLStack544);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1a0);
  lib::L2CValue::L2CValue((L2CValue *)&local_1a0,_BATTLE_OBJECT_CATEGORY_FIGHTER);
  uVar4 = lib::L2CValue::operator__(aLStack176,(L2CValue *)&local_1a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1a0);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_1a0,_BATTLE_OBJECT_CATEGORY_ITEM);
    uVar4 = lib::L2CValue::operator__(aLStack176,(L2CValue *)&local_1a0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_1a0);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_90,0x1086bc4a93);
      lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x14cc86d4e3);
      uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_90);
      uVar12 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
      fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (this->moduleAccessor,uVar4,uVar12);
      lib::L2CValue::L2CValue((L2CValue *)&local_1a0,fVar14);
      lib::L2CValue::operator_(aLStack368,(L2CValue *)&local_1a0);
      goto LAB_71000137b0;
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_1a0,_BATTLE_OBJECT_CATEGORY_ENEMY);
    uVar4 = lib::L2CValue::operator__(aLStack176,(L2CValue *)&local_1a0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_1a0);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_90,0x1086bc4a93);
      lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x14cc86d4e3);
      uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_90);
      uVar12 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
      fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (this->moduleAccessor,uVar4,uVar12);
      lib::L2CValue::L2CValue((L2CValue *)&local_1a0,fVar14);
      lib::L2CValue::operator_(aLStack368,(L2CValue *)&local_1a0);
      goto LAB_71000137b0;
    }
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_90,0x1086bc4a93);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x17440d1ca9);
    uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    uVar12 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
    fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar4,uVar12);
    lib::L2CValue::L2CValue((L2CValue *)&local_1a0,fVar14);
    lib::L2CValue::operator_(aLStack368,(L2CValue *)&local_1a0);
LAB_71000137b0:
    lib::L2CValue::_L2CValue((L2CValue *)&local_1a0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  }
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x18cdc1683);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x1fbdb2615);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x162d277af);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x18cdc1683);
  pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x1fbdb2615);
  pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x162d277af);
  this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack528,0x18cdc1683);
  this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack528,0x1fbdb2615);
  this_02 = (L2CValue *)lib::L2CValue::operator__(aLStack528,0x162d277af);
  uVar4 = lib::L2CValue::as_number(pLVar5);
  lVar15 = lib::L2CValue::as_number(pLVar6);
  uVar13 = lib::L2CValue::as_number(pLVar7);
  local_1a0 = uVar4 & 0xffffffff | lVar15 << 0x20;
  uStack408 = (ulong)uVar13;
  uVar4 = lib::L2CValue::as_number(pLVar8);
  lVar15 = lib::L2CValue::as_number(pLVar9);
  uVar13 = lib::L2CValue::as_number(pLVar10);
  local_90 = uVar4 & 0xffffffff | lVar15 << 0x20;
  uStack136 = (ulong)uVar13;
  uVar4 = lib::L2CValue::as_number(this_00);
  lVar15 = lib::L2CValue::as_number(this_01);
  uVar13 = lib::L2CValue::as_number(this_02);
  local_a0 = uVar4 & 0xffffffff | lVar15 << 0x20;
  uStack152 = (ulong)uVar13;
  fVar14 = (float)app::FighterUtil::get_line_pos_shortest_distance_point
                            ((Vector3f *)&local_1a0,(Vector3f *)&local_90,(Vector3f *)&local_a0);
  lib::L2CValue::L2CValue(aLStack592,fVar14);
  lib::L2CValue::operator_(aLStack496,aLStack592);
  fVar14 = (float)app::lua_bind::PostureModule__scale_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,fVar14);
  lib::L2CValue::operator_((L2CValue *)&local_90,(L2CValue *)&local_a0);
  lib::L2CValue::operator_(aLStack496,(L2CValue *)&local_1a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue((L2CValue *)&local_1a0,_FIGHTER_JACK_GENERATE_ARTICLE_WIREROPE);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_90,_WEAPON_JACK_WIREROPE_INSTANCE_WORK_ID_FLOAT_EC_LENGTH);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_1a0);
  fVar14 = (float)lib::L2CValue::as_number(aLStack496);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  app::lua_bind::ArticleModule__set_float_impl(this->moduleAccessor,iVar2,fVar14,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1a0);
  lib::L2CValue::L2CValue((L2CValue *)&local_1a0,_FIGHTER_JACK_GENERATE_ARTICLE_WIREROPE);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_90,_WEAPON_JACK_WIREROPE_INSTANCE_WORK_ID_FLOAT_CONTRACT_SPEED);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_1a0);
  fVar14 = (float)lib::L2CValue::as_number(aLStack368);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  app::lua_bind::ArticleModule__set_float_impl(this->moduleAccessor,iVar2,fVar14,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1a0);
  lib::L2CValue::L2CValue((L2CValue *)&local_1a0,_FIGHTER_JACK_GENERATE_ARTICLE_WIREROPE);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,_WEAPON_JACK_WIREROPE_STATUS_KIND_CONTRACT);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_1a0);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  app::lua_bind::ArticleModule__change_status_impl(this->moduleAccessor,iVar2,iVar3,0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1a0);
  lib::L2CValue::L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue((L2CValue *)&local_1a0,_BATTLE_OBJECT_CATEGORY_FIGHTER);
  uVar4 = lib::L2CValue::operator__(aLStack176,(L2CValue *)&local_1a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1a0);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_1a0,0x13dc26ddea);
    lib::L2CValue::operator_((L2CValue *)&local_90,(L2CValue *)&local_1a0);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_1a0,0x164cc83f97);
    lib::L2CValue::operator_((L2CValue *)&local_90,(L2CValue *)&local_1a0);
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_1a0);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x1086bc4a93);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  uVar12 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar12);
  lib::L2CValue::L2CValue((L2CValue *)&local_1a0,iVar2);
  lib::L2CValue::L2CValue(aLStack608,_FIGHTER_JACK_STATUS_SPECIAL_HI_INT_HIT_STOP_FRAME);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_1a0);
  iVar3 = lib::L2CValue::as_integer(aLStack608);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack608);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,aLStack176);
  lib::L2CValue::L2CValue(aLStack624,_FIGHTER_JACK_STATUS_SPECIAL_HI_INT_TARGET_OBJECT_ID);
  iVar2 = lib::L2CValue::as_integer(aLStack624);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack608,iVar2);
  FUN_710001d300(&local_1a0,&local_a0,aLStack608);
  bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_1a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1a0);
  lib::L2CValue::_L2CValue(aLStack608);
  lib::L2CValue::_L2CValue(aLStack624);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  if ((bVar1 & 1U) != 0) {
    app::lua_bind::CatchModule__set_catch_impl(this->moduleAccessor,0x50000000);
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue(aLStack592);
  lib::L2CValue::_L2CValue(aLStack528);
  lib::L2CValue::_L2CValue(aLStack496);
  lib::L2CValue::_L2CValue(aLStack432);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack240);
LAB_7100013cc0:
  lib::L2CValue::L2CValue((L2CValue *)&local_1a0,SpecialHiPull_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_1a0);
  lib::L2CValue::_L2CValue(aLStack176);
  return;
}

