
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponRichterWhip::status::Hold_main(L2CWeaponRichterWhip *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  void *pvVar7;
  BattleObjectModuleAccessor *pBVar8;
  float *pfVar9;
  L2CValue *pLVar10;
  L2CValue *pLVar11;
  L2CValue *pLVar12;
  L2CValue *pLVar13;
  L2CValue *this_00;
  L2CValue *this_01;
  Hash40 HVar14;
  ulong *this_02;
  BattleObjectModuleAccessor **ppBVar15;
  float fVar16;
  long lVar17;
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  ulong uStack352;
  undefined8 uStack344;
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
  ulong auStack176 [2];
  L2CValue aLStack160 [16];
  undefined8 uStack144;
  ulong uStack136;
  
  lib::L2CValue::L2CValue(aLStack240,0.0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&uStack352,_WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_FLOAT_HOLD_STICK_X);
  fVar16 = (float)lib::L2CValue::as_number(aLStack240);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&uStack352);
  ppBVar15 = &this->moduleAccessor;
  app::lua_bind::WorkModule__set_float_impl(*ppBVar15,fVar16,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack352);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::L2CValue(aLStack240,0.0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&uStack352,_WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_FLOAT_HOLD_STICK_Y);
  fVar16 = (float)lib::L2CValue::as_number(aLStack240);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&uStack352);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar15,fVar16,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack352);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::L2CValue(aLStack240,0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&uStack352,_WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_INT_HOLD_MOVE_STICK_COUNT);
  iVar3 = lib::L2CValue::as_integer(aLStack240);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&uStack352);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar15,iVar3,iVar4);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack352);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::L2CValue(aLStack240,0.0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&uStack352,_WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_FLOAT_HOLD_STICK_X_REINPUT);
  fVar16 = (float)lib::L2CValue::as_number(aLStack240);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&uStack352);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar15,fVar16,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack352);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::L2CValue(aLStack240,0.0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&uStack352,_WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_FLOAT_HOLD_STICK_Y_REINPUT);
  fVar16 = (float)lib::L2CValue::as_number(aLStack240);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&uStack352);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar15,fVar16,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack352);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::L2CValue(aLStack240,0.0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&uStack352,_WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_FLOAT_HOLD_STICK_X_CHAIN_SE)
  ;
  fVar16 = (float)lib::L2CValue::as_number(aLStack240);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&uStack352);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar15,fVar16,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack352);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::L2CValue(aLStack240,0.0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&uStack352,_WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_FLOAT_HOLD_STICK_Y_CHAIN_SE)
  ;
  fVar16 = (float)lib::L2CValue::as_number(aLStack240);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&uStack352);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar15,fVar16,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack352);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::L2CValue(aLStack240,0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&uStack352,_WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_INT_HOLD_REINPUT_COUNTER);
  iVar3 = lib::L2CValue::as_integer(aLStack240);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&uStack352);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar15,iVar3,iVar4);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack352);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::L2CValue(aLStack240,0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&uStack352,
             _WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_INT_HOLD_CHAIN_SE_STICK_COUNT);
  iVar3 = lib::L2CValue::as_integer(aLStack240);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&uStack352);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar15,iVar3,iVar4);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack352);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::L2CValue(aLStack240,_WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_FLAG_HOLD_WALL);
  iVar3 = lib::L2CValue::as_integer(aLStack240);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar15,iVar3);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::L2CValue(aLStack240,_WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_FLAG_HOLD_ATTACK_SLEEP);
  iVar3 = lib::L2CValue::as_integer(aLStack240);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar15,iVar3);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::L2CValue(aLStack240,_WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_FLAG_HOLD_BOUND_SE_ONCE);
  iVar3 = lib::L2CValue::as_integer(aLStack240);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar15,iVar3);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::L2CValue
            (aLStack240,_WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_FLAG_HOLD_SE_CHAIN_REQUESTED);
  iVar3 = lib::L2CValue::as_integer(aLStack240);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar15,iVar3);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::L2CValue(aLStack240,-1);
  lib::L2CValue::L2CValue
            ((L2CValue *)&uStack352,
             _WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_INT_HOLD_SE_SPEED_AFTER_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack240);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&uStack352);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar15,iVar3,iVar4);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack352);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::L2CValue(aLStack240,-1);
  lib::L2CValue::L2CValue
            ((L2CValue *)&uStack352,
             _WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_INT_HOLD_SE_REQUEST_AFTER_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack240);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&uStack352);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar15,iVar3,iVar4);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack352);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::L2CValue(aLStack240,_WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_FLAG_HOLD_SE_REQUESTED);
  iVar3 = lib::L2CValue::as_integer(aLStack240);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar15,iVar3);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::L2CValue(aLStack240,_WEAPON_INSTANCE_WORK_ID_INT_LINK_OWNER);
  iVar3 = lib::L2CValue::as_integer(aLStack240);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar15,iVar3);
  lib::L2CValue::L2CValue(aLStack160,iVar3);
  lib::L2CValue::_L2CValue(aLStack240);
  uVar5 = lib::L2CValue::as_integer(aLStack160);
  bVar1 = app::sv_battle_object::is_null(uVar5);
  lib::L2CValue::L2CValue((L2CValue *)&uStack352,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack240,false);
  uVar6 = lib::L2CValue::operator__((L2CValue *)&uStack352,aLStack240);
  lib::L2CValue::_L2CValue(aLStack240);
  if ((uVar6 & 1) == 0) {
    this_02 = &uStack352;
  }
  else {
    uVar5 = lib::L2CValue::as_integer(aLStack160);
    bVar1 = app::sv_battle_object::is_active(uVar5);
    lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack240);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue((L2CValue *)&uStack352);
    if ((bVar2 & 1U) == 0) goto LAB_7100027e6c;
    uVar5 = lib::L2CValue::as_integer(aLStack160);
    pvVar7 = (void *)app::sv_battle_object::module_accessor(uVar5);
    if (pvVar7 == (void *)0x0) {
      lib::L2CValue::L2CValue((L2CValue *)auStack176,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)auStack176,pvVar7);
    }
    pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer((L2CValue *)auStack176);
    pfVar9 = (float *)app::lua_bind::PostureModule__pos_impl(pBVar8);
    lib::L2CValue::L2CValue(aLStack240,*pfVar9);
    lib::L2CValue::L2CValue(aLStack224,pfVar9[1]);
    lib::L2CValue::L2CValue(aLStack208,pfVar9[2]);
    FUN_71000030b0(aLStack192,this,aLStack240);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::L2CValue(aLStack272,0.0);
    lib::L2CValue::L2CValue(aLStack288,0.0);
    lib::L2CValue::L2CValue(aLStack304,0.0);
    lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0xf0,(L2CValue)0xe0,(L2CValue)0xd0);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack272);
    pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x18cdc1683);
    pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x1fbdb2615);
    pLVar12 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x162d277af);
    lib::L2CValue::L2CValue(aLStack368,0x90e5233b6);
    pLVar13 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x18cdc1683);
    this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x1fbdb2615);
    this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x162d277af);
    HVar14 = lib::L2CValue::as_hash(aLStack368);
    uVar6 = lib::L2CValue::as_number(pLVar13);
    lVar17 = lib::L2CValue::as_number(this_00);
    uVar5 = lib::L2CValue::as_number(this_01);
    uStack144 = uVar6 & 0xffffffff | lVar17 << 0x20;
    uStack136 = (ulong)uVar5;
    app::lua_bind::ModelModule__joint_global_position_impl
              (*ppBVar15,HVar14,(Vector3f *)&uStack144,true);
    lib::L2CValue::L2CValue((L2CValue *)&uStack352,(float)uStack144);
    lib::L2CValue::L2CValue(aLStack336,uStack144._4_4_);
    lib::L2CValue::L2CValue(aLStack320,(float)uStack136);
    lib::L2CValue::operator_(pLVar10,(L2CValue *)&uStack352);
    lib::L2CValue::operator_(pLVar11,aLStack336);
    lib::L2CValue::operator_(pLVar12,aLStack320);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue((L2CValue *)&uStack352);
    lib::L2CValue::_L2CValue(aLStack368);
    pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x18cdc1683);
    pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x1fbdb2615);
    pLVar12 = (L2CValue *)lib::L2CValue::operator__(aLStack256,0x18cdc1683);
    pLVar13 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x18cdc1683);
    lib::L2CValue::operator_(pLVar12,pLVar13);
    lib::L2CValue::L2CValue(aLStack400,0.0);
    lib::L2CValue::L2CValue(aLStack416,false);
    uVar6 = lib::L2CValue::as_number(pLVar10);
    uVar5 = lib::L2CValue::as_number(pLVar11);
    uStack352 = uVar6 & 0xffffffff | (ulong)uVar5 << 0x20;
    uStack344 = 0;
    uVar6 = lib::L2CValue::as_number(aLStack384);
    uVar5 = lib::L2CValue::as_number(aLStack400);
    uStack144 = uVar6 & 0xffffffff | (ulong)uVar5 << 0x20;
    uStack136 = 0;
    bVar1 = lib::L2CValue::as_bool(aLStack416);
    bVar1 = app::lua_bind::GroundModule__ray_check_impl
                      (*ppBVar15,(Vector2f *)&uStack352,(Vector2f *)&uStack144,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack368,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack368);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack416);
    lib::L2CValue::_L2CValue(aLStack400);
    lib::L2CValue::_L2CValue(aLStack384);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)&uStack352,_WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_FLAG_HOLD_WALL);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&uStack352);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar15,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&uStack352);
    }
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack192);
    this_02 = auStack176;
  }
  lib::L2CValue::_L2CValue((L2CValue *)this_02);
LAB_7100027e6c:
  lib::L2CValue::L2CValue((L2CValue *)&uStack352,0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&uStack144,
             _WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_INT_HOLD_TIP_NODE_MOVE_AFTER_COUNT);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&uStack352);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&uStack144);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar15,iVar3,iVar4);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack144);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack352);
  lib::L2CValue::L2CValue((L2CValue *)auStack176,0x1b);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack176);
  iVar3 = app::lua_bind::PhysicsModule__get_2nd_touch_ground_line_num_impl(*ppBVar15,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&uStack144,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&uStack352,0);
  uVar6 = lib::L2CValue::operator_((L2CValue *)&uStack352,(L2CValue *)&uStack144);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack352);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack144);
  lib::L2CValue::_L2CValue((L2CValue *)auStack176);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&uStack352,_WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_FLAG_HOLD_SE_GROUND);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&uStack352);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar15,iVar3);
  }
  else {
    lib::L2CValue::L2CValue
              ((L2CValue *)&uStack352,_WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_FLAG_HOLD_SE_GROUND);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&uStack352);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar15,iVar3);
  }
  lib::L2CValue::_L2CValue((L2CValue *)&uStack352);
  lib::L2CValue::L2CValue((L2CValue *)&uStack352,Hold_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack352);
  lib::L2CValue::_L2CValue(aLStack160);
  return;
}

