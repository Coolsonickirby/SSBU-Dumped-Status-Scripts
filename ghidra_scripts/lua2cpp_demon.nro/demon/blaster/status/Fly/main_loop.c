
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponDemonBlaster::status::Fly_main_loop(L2CWeaponDemonBlaster *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  ulong uVar8;
  float *pfVar9;
  L2CValue *pLVar10;
  L2CAgent *this_00;
  L2CValue *pLVar11;
  L2CValue *pLVar12;
  L2CValue *this_01;
  Hash40 HVar13;
  ulong *this_02;
  Vector3f *pVVar14;
  BattleObjectModuleAccessor **ppBVar15;
  float fVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  long lVar21;
  undefined8 uVar22;
  L2CValue aLStack864 [16];
  L2CValue aLStack848 [16];
  L2CValue aLStack832 [16];
  L2CValue aLStack816 [16];
  L2CValue aLStack800 [16];
  L2CValue aLStack784 [16];
  L2CValue aLStack768 [16];
  L2CValue aLStack752 [16];
  L2CValue aLStack736 [16];
  undefined auStack720 [32];
  L2CValue aLStack688 [16];
  L2CValue aLStack672 [16];
  L2CValue aLStack656 [16];
  L2CValue aLStack640 [16];
  L2CValue aLStack624 [16];
  L2CValue aLStack608 [16];
  undefined local_250 [32];
  L2CValue aLStack560 [16];
  L2CValue aLStack544 [16];
  L2CValue aLStack528 [16];
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  undefined auStack448 [32];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  ulong auStack368 [2];
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
  
  lib::L2CValue::L2CValue(aLStack176,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar4 = lib::L2CValue::as_integer(aLStack176);
  ppBVar15 = &this->moduleAccessor;
  iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar15,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)local_250,0);
  uVar6 = lib::L2CValue::operator__((L2CValue *)&local_a0,(L2CValue *)local_250);
  lib::L2CValue::_L2CValue((L2CValue *)local_250);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::_L2CValue(aLStack176);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)local_250,0x199c462b5d);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)local_250);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue((L2CValue *)local_250);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    return;
  }
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,0xdf4889598);
  lib::L2CValue::L2CValue(aLStack176,0x1c2b1f206e);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  uVar8 = lib::L2CValue::as_integer(aLStack176);
  iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar15,uVar6,uVar8);
  lib::L2CValue::L2CValue((L2CValue *)local_250,iVar4);
  uVar6 = lib::L2CValue::operator__((L2CValue *)local_250,pLVar7);
  lib::L2CValue::_L2CValue((L2CValue *)local_250);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue
              (aLStack176,_WEAPON_DEMON_BLASTER_STATUS_WORK_ID_FLAG_CHECK_PASSABLE_GROUND);
    iVar4 = lib::L2CValue::as_integer(aLStack176);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar15,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)local_250,false);
    uVar6 = lib::L2CValue::operator__((L2CValue *)&local_a0,(L2CValue *)local_250);
    lib::L2CValue::_L2CValue((L2CValue *)local_250);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)local_250,false);
      bVar1 = lib::L2CValue::as_bool((L2CValue *)local_250);
      app::lua_bind::GroundModule__set_passable_check_impl(*ppBVar15,(bool)(bVar1 & 1));
      lib::L2CValue::_L2CValue((L2CValue *)local_250);
      lib::L2CValue::L2CValue
                ((L2CValue *)local_250,
                 _WEAPON_DEMON_BLASTER_STATUS_WORK_ID_FLAG_CHECK_PASSABLE_GROUND);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)local_250);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar15,iVar4);
      lib::L2CValue::_L2CValue((L2CValue *)local_250);
    }
  }
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CValue::L2CValue
            ((L2CValue *)local_250,_WEAPON_DEMON_BLASTER_INSTANCE_WORK_ID_INT_BEAM_EFFECT_HANDLE);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)local_250);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar15,iVar4);
  lib::L2CValue::L2CValue(aLStack208,iVar4);
  lib::L2CValue::_L2CValue((L2CValue *)local_250);
  lib::L2CValue::L2CValue(aLStack240,0.0);
  lib::L2CValue::L2CValue(aLStack256,0.0);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x10,(L2CValue)0x0);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::L2CValue((L2CValue *)local_250,_EFFECT_HANDLE_NULL);
  uVar6 = lib::L2CValue::operator__(aLStack208,(L2CValue *)local_250);
  lib::L2CValue::_L2CValue((L2CValue *)local_250);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack272,0.0);
    lib::L2CValue::L2CValue(aLStack288,0.0);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xf0,(L2CValue)0xe0);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::L2CValue
              (aLStack304,_WEAPON_DEMON_BLASTER_INSTANCE_WORK_ID_FLOAT_SHOT_EFFECT_POS_X);
    iVar4 = lib::L2CValue::as_integer(aLStack304);
    fVar16 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar15,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)local_250,fVar16);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_a0,0x18cdc1683);
    lib::L2CValue::operator_(pLVar7,(L2CValue *)local_250);
    lib::L2CValue::_L2CValue((L2CValue *)local_250);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::L2CValue
              (aLStack304,_WEAPON_DEMON_BLASTER_INSTANCE_WORK_ID_FLOAT_SHOT_EFFECT_POS_Y);
    iVar4 = lib::L2CValue::as_integer(aLStack304);
    fVar16 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar15,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)local_250,fVar16);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_a0,0x1fbdb2615);
    lib::L2CValue::operator_(pLVar7,(L2CValue *)local_250);
    lib::L2CValue::_L2CValue((L2CValue *)local_250);
    lib::L2CValue::_L2CValue(aLStack304);
    pfVar9 = (float *)app::lua_bind::PostureModule__pos_impl(*ppBVar15);
    lib::L2CValue::L2CValue(aLStack352,*pfVar9);
    lib::L2CValue::L2CValue(aLStack336,pfVar9[1]);
    lib::L2CValue::L2CValue(aLStack320,pfVar9[2]);
    FUN_7100002430(aLStack304,this,aLStack352);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack352);
    fVar16 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar15);
    lib::L2CValue::L2CValue((L2CValue *)auStack368,fVar16);
    lib::L2CValue::L2CValue((L2CValue *)local_250,1.0);
    uVar6 = lib::L2CValue::operator__((L2CValue *)auStack368,(L2CValue *)local_250);
    lib::L2CValue::_L2CValue((L2CValue *)local_250);
    if ((uVar6 & 1) == 0) {
LAB_71000029d8:
      fVar16 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar15);
      lib::L2CValue::L2CValue(aLStack384,fVar16);
      lib::L2CValue::L2CValue((L2CValue *)local_250,-1.0);
      uVar6 = lib::L2CValue::operator__(aLStack384,(L2CValue *)local_250);
      lib::L2CValue::_L2CValue((L2CValue *)local_250);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::_L2CValue(aLStack384);
        goto LAB_7100002d60;
      }
      pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x18cdc1683);
      pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_a0,0x18cdc1683);
      uVar6 = lib::L2CValue::operator_(pLVar7,pLVar10);
      lib::L2CValue::_L2CValue(aLStack384);
      lib::L2CValue::_L2CValue((L2CValue *)auStack368);
      if ((uVar6 & 1) != 0) goto LAB_7100002a60;
    }
    else {
      pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x18cdc1683);
      pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_a0,0x18cdc1683);
      uVar6 = lib::L2CValue::operator_(pLVar10,pLVar7);
      if ((uVar6 & 1) == 0) goto LAB_71000029d8;
      lib::L2CValue::_L2CValue((L2CValue *)auStack368);
LAB_7100002a60:
      pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x18cdc1683);
      pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_a0,0x18cdc1683);
      lib::L2CValue::operator_(pLVar7,pLVar10);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x1fbdb2615);
      pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_a0,0x1fbdb2615);
      lib::L2CValue::operator_(pLVar7,pLVar10);
      lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x70,(L2CValue)0x60);
      lib::L2CValue::operator_(aLStack224,(L2CValue *)local_250);
      lib::L2CValue::_L2CValue((L2CValue *)local_250);
      lib::L2CValue::_L2CValue(aLStack416);
      lib::L2CValue::_L2CValue(aLStack400);
      lib::L2CValue::L2CValue((L2CValue *)(auStack448 + 0x10),aLStack224);
      lua2cpp::L2CFighterBase::Vector2__length(this,(L2CValue)0x50);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack448 + 0x10));
      fVar16 = (float)app::lua_bind::PostureModule__scale_impl(*ppBVar15);
      lib::L2CValue::L2CValue(aLStack384,fVar16);
      lib::L2CValue::L2CValue((L2CValue *)auStack448,1.0);
      uVar5 = lib::L2CValue::as_integer(aLStack208);
      uVar6 = lib::L2CValue::as_number(aLStack384);
      lVar21 = lib::L2CValue::as_number((L2CValue *)auStack368);
      uVar17 = lib::L2CValue::as_number((L2CValue *)auStack448);
      local_250._0_8_ = (void **)(uVar6 & 0xffffffff | lVar21 << 0x20);
      local_250._8_8_ = (lua_State *)(ulong)uVar17;
      pVVar14 = (Vector3f *)local_250;
      app::lua_bind::EffectModule__set_scale_impl(*ppBVar15,uVar5,pVVar14);
      lib::L2CValue::_L2CValue((L2CValue *)auStack448);
      lib::L2CValue::_L2CValue(aLStack384);
      this_00 = (L2CAgent *)lib::L2CValue::operator__(aLStack224,0x1fbdb2615);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x18cdc1683);
      lib::L2CAgent::math_atan(this_00,pLVar7,(L2CValue *)pVVar14);
      lib::L2CAgent::math_deg((L2CAgent *)auStack448,pLVar7);
      lib::L2CValue::operator_(aLStack384);
      lib::L2CValue::operator_(aLStack176,(L2CValue *)local_250);
      lib::L2CValue::_L2CValue((L2CValue *)local_250);
      lib::L2CValue::_L2CValue(aLStack384);
      lib::L2CValue::_L2CValue((L2CValue *)auStack448);
      lib::L2CValue::L2CValue(aLStack384,90.0);
      lib::L2CValue::L2CValue((L2CValue *)auStack448,0.0);
      uVar5 = lib::L2CValue::as_integer(aLStack208);
      uVar6 = lib::L2CValue::as_number(aLStack176);
      lVar21 = lib::L2CValue::as_number(aLStack384);
      uVar17 = lib::L2CValue::as_number((L2CValue *)auStack448);
      local_250._0_8_ = (void **)(uVar6 & 0xffffffff | lVar21 << 0x20);
      local_250._8_8_ = (lua_State *)(ulong)uVar17;
      app::lua_bind::EffectModule__set_rot_impl(*ppBVar15,uVar5,(Vector3f *)local_250);
      lib::L2CValue::_L2CValue((L2CValue *)auStack448);
      lib::L2CValue::_L2CValue(aLStack384);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_a0,0x18cdc1683);
      pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_a0,0x1fbdb2615);
      pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x162d277af);
      uVar5 = lib::L2CValue::as_integer(aLStack208);
      uVar6 = lib::L2CValue::as_number(pLVar7);
      lVar21 = lib::L2CValue::as_number(pLVar10);
      uVar17 = lib::L2CValue::as_number(pLVar11);
      local_250._0_8_ = (void **)(uVar6 & 0xffffffff | lVar21 << 0x20);
      local_250._8_8_ = (lua_State *)(ulong)uVar17;
      app::lua_bind::EffectModule__set_pos_impl(*ppBVar15,uVar5,(Vector3f *)local_250);
LAB_7100002d60:
      lib::L2CValue::_L2CValue((L2CValue *)auStack368);
    }
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  }
  lib::L2CValue::L2CValue(aLStack304,GROUND_TOUCH_FLAG_ALL);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
  lib::L2CValue::L2CValue((L2CValue *)local_250,6);
  uVar6 = lib::L2CValue::operator__(pLVar7,(L2CValue *)local_250);
  lib::L2CValue::_L2CValue((L2CValue *)local_250);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)local_250,_GROUND_TOUCH_FLAG_UP | GROUND_TOUCH_FLAG_DOWN);
    lib::L2CValue::operator_(aLStack304,(L2CValue *)local_250);
    lib::L2CValue::_L2CValue((L2CValue *)local_250);
    fVar16 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar15);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,fVar16);
    lib::L2CValue::L2CValue((L2CValue *)local_250,-1.0);
    uVar6 = lib::L2CValue::operator__((L2CValue *)&local_a0,(L2CValue *)local_250);
    lib::L2CValue::_L2CValue((L2CValue *)local_250);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)local_250,GROUND_TOUCH_FLAG_RIGHT);
      lib::L2CValue::operator_(aLStack304,(L2CValue *)local_250);
      lib::L2CValue::_L2CValue((L2CValue *)local_250);
      lib::L2CValue::operator_(aLStack304,(L2CValue *)&local_a0);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)local_250,_GROUND_TOUCH_FLAG_LEFT);
      lib::L2CValue::operator_(aLStack304,(L2CValue *)local_250);
      lib::L2CValue::_L2CValue((L2CValue *)local_250);
      lib::L2CValue::operator_(aLStack304,(L2CValue *)&local_a0);
    }
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  }
  uVar5 = lib::L2CValue::as_integer(aLStack304);
  bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar15,uVar5);
  lib::L2CValue::L2CValue((L2CValue *)local_250,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_250);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack368,_WEAPON_DEMON_BLASTER_STATUS_WORK_ID_FLAG_HIT_GROUND);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack368);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar15,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_a0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::_L2CValue((L2CValue *)auStack368);
    lib::L2CValue::_L2CValue((L2CValue *)local_250);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)local_250,_WEAPON_DEMON_BLASTER_INSTANCE_WORK_ID_INT_SHOT_EFFECT_HANDLE
                );
      iVar4 = lib::L2CValue::as_integer((L2CValue *)local_250);
      iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar15,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)&local_a0,iVar4);
      lib::L2CValue::_L2CValue((L2CValue *)local_250);
      lib::L2CValue::L2CValue((L2CValue *)local_250,_EFFECT_HANDLE_NULL);
      uVar6 = lib::L2CValue::operator__((L2CValue *)&local_a0,(L2CValue *)local_250);
      lib::L2CValue::_L2CValue((L2CValue *)local_250);
      if ((uVar6 & 1) == 0) {
        pfVar9 = (float *)app::lua_bind::PostureModule__pos_impl(*ppBVar15);
        lib::L2CValue::L2CValue(aLStack864,*pfVar9);
        lib::L2CValue::L2CValue(aLStack848,pfVar9[1]);
        lib::L2CValue::L2CValue(aLStack832,pfVar9[2]);
        FUN_7100002430(auStack368,this,aLStack864);
        lib::L2CValue::_L2CValue(aLStack832);
        lib::L2CValue::_L2CValue(aLStack848);
        lib::L2CValue::_L2CValue(aLStack864);
        lib::L2CValue::L2CValue
                  (aLStack384,_WEAPON_DEMON_BLASTER_INSTANCE_WORK_ID_FLOAT_SHOT_EFFECT_POS_X);
        iVar4 = lib::L2CValue::as_integer(aLStack384);
        fVar16 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar15,iVar4);
        lib::L2CValue::L2CValue((L2CValue *)local_250,fVar16);
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack368,0x18cdc1683);
        lib::L2CValue::operator_(pLVar7,(L2CValue *)local_250);
        lib::L2CValue::_L2CValue((L2CValue *)local_250);
        lib::L2CValue::_L2CValue(aLStack384);
        lib::L2CValue::L2CValue
                  (aLStack384,_WEAPON_DEMON_BLASTER_INSTANCE_WORK_ID_FLOAT_SHOT_EFFECT_POS_Y);
        iVar4 = lib::L2CValue::as_integer(aLStack384);
        fVar16 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar15,iVar4);
        lib::L2CValue::L2CValue((L2CValue *)local_250,fVar16);
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack368,0x1fbdb2615);
        lib::L2CValue::operator_(pLVar7,(L2CValue *)local_250);
        lib::L2CValue::_L2CValue((L2CValue *)local_250);
        lib::L2CValue::_L2CValue(aLStack384);
        pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack368,0x18cdc1683);
        pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack368,0x1fbdb2615);
        pLVar11 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack368,0x162d277af);
        uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
        uVar6 = lib::L2CValue::as_number(pLVar7);
        lVar21 = lib::L2CValue::as_number(pLVar10);
        uVar17 = lib::L2CValue::as_number(pLVar11);
        local_250._0_8_ = (void **)(uVar6 & 0xffffffff | lVar21 << 0x20);
        local_250._8_8_ = (lua_State *)(ulong)uVar17;
        app::lua_bind::EffectModule__set_pos_impl(*ppBVar15,uVar5,(Vector3f *)local_250);
        lib::L2CValue::_L2CValue((L2CValue *)auStack368);
      }
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      this_02 = &local_a0;
      goto LAB_71000040a0;
    }
  }
  else {
    lib::L2CValue::_L2CValue((L2CValue *)local_250);
  }
  lib::L2CValue::L2CValue(aLStack464,0.0);
  lib::L2CValue::L2CValue(aLStack480,0.0);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x30,(L2CValue)0x20);
  lib::L2CValue::_L2CValue(aLStack480);
  lib::L2CValue::_L2CValue(aLStack464);
  lib::L2CValue::L2CValue(aLStack496,0.0);
  lib::L2CValue::L2CValue(aLStack512,0.0);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x10,(L2CValue)0x0);
  lib::L2CValue::_L2CValue(aLStack512);
  lib::L2CValue::_L2CValue(aLStack496);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,GROUND_TOUCH_FLAG_ALL);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar15,uVar5);
  lib::L2CValue::L2CValue((L2CValue *)local_250,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)local_250);
  lib::L2CValue::_L2CValue((L2CValue *)local_250);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_a0,_WEAPON_DEMON_BLASTER_STATUS_WORK_ID_FLOAT_GROUND_HIT_POS_X);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
    fVar16 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar15,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)local_250,fVar16);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack368,0x18cdc1683);
    lib::L2CValue::operator_(pLVar7,(L2CValue *)local_250);
    lib::L2CValue::_L2CValue((L2CValue *)local_250);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_a0,_WEAPON_DEMON_BLASTER_STATUS_WORK_ID_FLOAT_GROUND_HIT_POS_Y);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
    fVar16 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar15,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)local_250,fVar16);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack368,0x1fbdb2615);
    lib::L2CValue::operator_(pLVar7,(L2CValue *)local_250);
    lib::L2CValue::_L2CValue((L2CValue *)local_250);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_a0,_WEAPON_DEMON_BLASTER_STATUS_WORK_ID_FLOAT_GROUND_HIT_NORMAL_X)
    ;
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
    fVar16 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar15,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)local_250,fVar16);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack384,0x18cdc1683);
    lib::L2CValue::operator_(pLVar7,(L2CValue *)local_250);
    lib::L2CValue::_L2CValue((L2CValue *)local_250);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_a0,_WEAPON_DEMON_BLASTER_STATUS_WORK_ID_FLOAT_GROUND_HIT_NORMAL_Y)
    ;
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
    fVar16 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar15,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)local_250,fVar16);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack384,0x1fbdb2615);
    lib::L2CValue::operator_(pLVar7,(L2CValue *)local_250);
    pLVar7 = (L2CValue *)local_250;
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)local_250,true);
    lib::L2CValue::L2CValue((L2CValue *)auStack448,true);
    bVar1 = lib::L2CValue::as_bool((L2CValue *)local_250);
    bVar3 = lib::L2CValue::as_bool((L2CValue *)auStack448);
    uVar5 = app::lua_bind::GroundModule__ground_touch_flag_ex_impl
                      (*ppBVar15,(bool)(bVar1 & 1),(bool)(bVar3 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,uVar5);
    lib::L2CValue::_L2CValue((L2CValue *)auStack448);
    lib::L2CValue::_L2CValue((L2CValue *)local_250);
    lib::L2CValue::L2CValue(aLStack528,0.0);
    lib::L2CValue::L2CValue(aLStack544,0.0);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xf0,(L2CValue)0xe0);
    lib::L2CValue::_L2CValue(aLStack544);
    lib::L2CValue::_L2CValue(aLStack528);
    lib::L2CValue::L2CValue((L2CValue *)local_250,GROUND_TOUCH_FLAG_DOWN);
    lib::L2CValue::operator_((L2CValue *)&local_a0,(L2CValue *)local_250);
    lib::L2CValue::_L2CValue((L2CValue *)local_250);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack560);
    lib::L2CValue::_L2CValue(aLStack560);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)local_250,_GROUND_TOUCH_FLAG_UP);
      lib::L2CValue::operator_((L2CValue *)&local_a0,(L2CValue *)local_250);
      lib::L2CValue::_L2CValue((L2CValue *)local_250);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack560);
      lib::L2CValue::_L2CValue(aLStack560);
      if ((bVar2 & 1U) != 0) {
        pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack448,0x18cdc1683);
        pLVar11 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack448,0x1fbdb2615);
        lib::L2CValue::L2CValue(aLStack560,_GROUND_TOUCH_FLAG_UP);
        uVar5 = lib::L2CValue::as_integer(aLStack560);
        pfVar9 = (float *)app::lua_bind::GroundModule__get_touch_pos_impl(*ppBVar15,uVar5);
        lib::L2CValue::L2CValue((L2CValue *)local_250,*pfVar9);
        pLVar7 = (L2CValue *)(local_250 + 0x10);
        lib::L2CValue::L2CValue(pLVar7,pfVar9[1]);
        lib::L2CValue::operator_(pLVar10,(L2CValue *)local_250);
        lib::L2CValue::operator_(pLVar11,pLVar7);
        lib::L2CValue::_L2CValue(pLVar7);
        lib::L2CValue::_L2CValue((L2CValue *)local_250);
        lib::L2CValue::_L2CValue(aLStack560);
        pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack384,0x18cdc1683);
        pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack384,0x1fbdb2615);
        lib::L2CValue::L2CValue(aLStack560,_GROUND_TOUCH_FLAG_UP);
        uVar5 = lib::L2CValue::as_integer(aLStack560);
        uVar22 = app::lua_bind::GroundModule__get_touch_normal_impl(*ppBVar15,uVar5);
        lib::L2CValue::L2CValue((L2CValue *)local_250,(float)uVar22);
        lib::L2CValue::L2CValue((L2CValue *)(local_250 + 0x10),(float)((ulong)uVar22 >> 0x20));
        lib::L2CValue::operator_(pLVar7,(L2CValue *)local_250);
        lib::L2CValue::operator_(pLVar10,(L2CValue *)(local_250 + 0x10));
        goto LAB_71000039fc;
      }
      lib::L2CValue::L2CValue
                ((L2CValue *)local_250,
                 GROUND_TOUCH_FLAG_UP_LEFT | _GROUND_TOUCH_FLAG_LEFT | _GROUND_TOUCH_FLAG_DOWN_LEFT)
      ;
      lib::L2CValue::operator_((L2CValue *)&local_a0,(L2CValue *)local_250);
      lib::L2CValue::_L2CValue((L2CValue *)local_250);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack560);
      lib::L2CValue::_L2CValue(aLStack560);
      if ((bVar2 & 1U) != 0) {
        pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack448,0x18cdc1683);
        pLVar11 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack448,0x1fbdb2615);
        lib::L2CValue::L2CValue(aLStack560,_GROUND_TOUCH_FLAG_LEFT);
        uVar5 = lib::L2CValue::as_integer(aLStack560);
        pfVar9 = (float *)app::lua_bind::GroundModule__get_touch_pos_impl(*ppBVar15,uVar5);
        lib::L2CValue::L2CValue((L2CValue *)local_250,*pfVar9);
        pLVar7 = (L2CValue *)(local_250 + 0x10);
        lib::L2CValue::L2CValue(pLVar7,pfVar9[1]);
        lib::L2CValue::operator_(pLVar10,(L2CValue *)local_250);
        lib::L2CValue::operator_(pLVar11,pLVar7);
        lib::L2CValue::_L2CValue(pLVar7);
        lib::L2CValue::_L2CValue((L2CValue *)local_250);
        lib::L2CValue::_L2CValue(aLStack560);
        pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack384,0x18cdc1683);
        pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack384,0x1fbdb2615);
        lib::L2CValue::L2CValue(aLStack560,_GROUND_TOUCH_FLAG_LEFT);
        uVar5 = lib::L2CValue::as_integer(aLStack560);
        uVar22 = app::lua_bind::GroundModule__get_touch_normal_impl(*ppBVar15,uVar5);
        lib::L2CValue::L2CValue((L2CValue *)local_250,(float)uVar22);
        lib::L2CValue::L2CValue((L2CValue *)(local_250 + 0x10),(float)((ulong)uVar22 >> 0x20));
        lib::L2CValue::operator_(pLVar7,(L2CValue *)local_250);
        lib::L2CValue::operator_(pLVar10,(L2CValue *)(local_250 + 0x10));
        goto LAB_71000039fc;
      }
      lib::L2CValue::L2CValue
                ((L2CValue *)local_250,
                 GROUND_TOUCH_FLAG_UP_RIGHT | GROUND_TOUCH_FLAG_RIGHT |
                 _GROUND_TOUCH_FLAG_DOWN_RIGHT);
      lib::L2CValue::operator_((L2CValue *)&local_a0,(L2CValue *)local_250);
      lib::L2CValue::_L2CValue((L2CValue *)local_250);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack560);
      lib::L2CValue::_L2CValue(aLStack560);
      if ((bVar2 & 1U) != 0) {
        pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack448,0x18cdc1683);
        pLVar11 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack448,0x1fbdb2615);
        lib::L2CValue::L2CValue(aLStack560,GROUND_TOUCH_FLAG_RIGHT);
        uVar5 = lib::L2CValue::as_integer(aLStack560);
        pfVar9 = (float *)app::lua_bind::GroundModule__get_touch_pos_impl(*ppBVar15,uVar5);
        lib::L2CValue::L2CValue((L2CValue *)local_250,*pfVar9);
        pLVar7 = (L2CValue *)(local_250 + 0x10);
        lib::L2CValue::L2CValue(pLVar7,pfVar9[1]);
        lib::L2CValue::operator_(pLVar10,(L2CValue *)local_250);
        lib::L2CValue::operator_(pLVar11,pLVar7);
        lib::L2CValue::_L2CValue(pLVar7);
        lib::L2CValue::_L2CValue((L2CValue *)local_250);
        lib::L2CValue::_L2CValue(aLStack560);
        pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack384,0x18cdc1683);
        pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack384,0x1fbdb2615);
        lib::L2CValue::L2CValue(aLStack560,GROUND_TOUCH_FLAG_RIGHT);
        uVar5 = lib::L2CValue::as_integer(aLStack560);
        uVar22 = app::lua_bind::GroundModule__get_touch_normal_impl(*ppBVar15,uVar5);
        lib::L2CValue::L2CValue((L2CValue *)local_250,(float)uVar22);
        lib::L2CValue::L2CValue((L2CValue *)(local_250 + 0x10),(float)((ulong)uVar22 >> 0x20));
        lib::L2CValue::operator_(pLVar7,(L2CValue *)local_250);
        lib::L2CValue::operator_(pLVar10,(L2CValue *)(local_250 + 0x10));
        goto LAB_71000039fc;
      }
    }
    else {
      pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack448,0x18cdc1683);
      pLVar11 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack448,0x1fbdb2615);
      lib::L2CValue::L2CValue(aLStack560,GROUND_TOUCH_FLAG_DOWN);
      uVar5 = lib::L2CValue::as_integer(aLStack560);
      pfVar9 = (float *)app::lua_bind::GroundModule__get_touch_pos_impl(*ppBVar15,uVar5);
      lib::L2CValue::L2CValue((L2CValue *)local_250,*pfVar9);
      pLVar7 = (L2CValue *)(local_250 + 0x10);
      lib::L2CValue::L2CValue(pLVar7,pfVar9[1]);
      lib::L2CValue::operator_(pLVar10,(L2CValue *)local_250);
      lib::L2CValue::operator_(pLVar11,pLVar7);
      lib::L2CValue::_L2CValue(pLVar7);
      lib::L2CValue::_L2CValue((L2CValue *)local_250);
      lib::L2CValue::_L2CValue(aLStack560);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack384,0x18cdc1683);
      pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack384,0x1fbdb2615);
      lib::L2CValue::L2CValue(aLStack560,GROUND_TOUCH_FLAG_DOWN);
      uVar5 = lib::L2CValue::as_integer(aLStack560);
      uVar22 = app::lua_bind::GroundModule__get_touch_normal_impl(*ppBVar15,uVar5);
      lib::L2CValue::L2CValue((L2CValue *)local_250,(float)uVar22);
      lib::L2CValue::L2CValue((L2CValue *)(local_250 + 0x10),(float)((ulong)uVar22 >> 0x20));
      lib::L2CValue::operator_(pLVar7,(L2CValue *)local_250);
      lib::L2CValue::operator_(pLVar10,(L2CValue *)(local_250 + 0x10));
LAB_71000039fc:
      lib::L2CValue::_L2CValue((L2CValue *)(local_250 + 0x10));
      lib::L2CValue::_L2CValue((L2CValue *)local_250);
      lib::L2CValue::_L2CValue(aLStack560);
    }
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack448,0x18cdc1683);
    pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack368,0x18cdc1683);
    lib::L2CValue::operator_(pLVar10,pLVar7);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack448,0x1fbdb2615);
    pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack368,0x1fbdb2615);
    lib::L2CValue::operator_(pLVar10,pLVar7);
    pLVar7 = (L2CValue *)auStack448;
  }
  lib::L2CValue::_L2CValue(pLVar7);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack384,0x18cdc1683);
  lib::L2CValue::L2CValue(aLStack608,pLVar7);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack384,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack624,pLVar7);
  pLVar7 = aLStack624;
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xa0,SUB81(pLVar7,0));
  lib::L2CValue::_L2CValue(aLStack624);
  lib::L2CValue::_L2CValue(aLStack608);
  lib::L2CValue::L2CValue(aLStack560,0x184f45c61e);
  lib::L2CValue::L2CValue(aLStack656,0.0);
  lib::L2CValue::L2CValue(aLStack672,0.0);
  pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack448,0x18cdc1683);
  lib::L2CValue::operator_(pLVar10);
  pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack448,0x1fbdb2615);
  lib::L2CAgent::math_atan((L2CAgent *)local_250,pLVar10,pLVar7);
  lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x70,(L2CValue)0x60,(L2CValue)0x50);
  lib::L2CValue::_L2CValue(aLStack688);
  lib::L2CValue::_L2CValue((L2CValue *)local_250);
  lib::L2CValue::_L2CValue(aLStack672);
  lib::L2CValue::_L2CValue(aLStack656);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x18cdc1683);
  pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x1fbdb2615);
  fVar16 = (float)lib::L2CValue::as_number(pLVar7);
  fVar18 = (float)lib::L2CValue::as_number(pLVar10);
  bVar1 = app::sv_math::vec2_is_zero(fVar16,fVar18);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)local_250,false);
  uVar6 = lib::L2CValue::operator__((L2CValue *)&local_a0,(L2CValue *)local_250);
  lib::L2CValue::_L2CValue((L2CValue *)local_250);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  if ((uVar6 & 1) != 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x18cdc1683);
    pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x1fbdb2615);
    pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack384,0x18cdc1683);
    pLVar12 = (L2CValue *)lib::L2CValue::operator__(aLStack384,0x1fbdb2615);
    fVar16 = (float)lib::L2CValue::as_number(pLVar7);
    fVar18 = (float)lib::L2CValue::as_number(pLVar10);
    fVar19 = (float)lib::L2CValue::as_number(pLVar11);
    fVar20 = (float)lib::L2CValue::as_number(pLVar12);
    fVar16 = (float)app::sv_math::vec2_angle(fVar16,fVar18,fVar19,fVar20);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,fVar16);
    lib::L2CValue::L2CValue(aLStack752,0xdf4889598);
    lib::L2CValue::L2CValue(aLStack768,0x142252e7cd);
    uVar6 = lib::L2CValue::as_integer(aLStack752);
    uVar8 = lib::L2CValue::as_integer(aLStack768);
    fVar16 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar15,uVar6,uVar8);
    lib::L2CValue::L2CValue(aLStack736,fVar16);
    lib::L2CValue::L2CValue((L2CValue *)local_250,90.0);
    pLVar7 = (L2CValue *)local_250;
    lib::L2CValue::operator_(aLStack736,pLVar7);
    lib::L2CValue::_L2CValue((L2CValue *)local_250);
    lib::L2CAgent::math_rad((L2CAgent *)auStack720,pLVar7);
    uVar6 = lib::L2CValue::operator__((L2CValue *)&local_a0,(L2CValue *)(auStack720 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)(auStack720 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)auStack720);
    lib::L2CValue::_L2CValue(aLStack736);
    lib::L2CValue::_L2CValue(aLStack768);
    lib::L2CValue::_L2CValue(aLStack752);
    if ((uVar6 & 1) != 0) {
      fVar16 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar15);
      lib::L2CValue::L2CValue((L2CValue *)(auStack720 + 0x10),fVar16);
      lib::L2CValue::L2CValue((L2CValue *)local_250,90.0);
      lib::L2CValue::operator_((L2CValue *)(auStack720 + 0x10),(L2CValue *)local_250);
      lib::L2CValue::_L2CValue((L2CValue *)local_250);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack640,0x1fbdb2615);
      lib::L2CValue::operator_(pLVar7,(L2CValue *)auStack720);
      lib::L2CValue::_L2CValue((L2CValue *)auStack720);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack640,0x162d277af);
      lib::L2CValue::operator_((L2CValue *)(auStack720 + 0x10));
      lib::L2CValue::operator_(pLVar7,(L2CValue *)auStack720);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack640,0x18cdc1683);
      lib::L2CValue::operator_(pLVar7,(L2CValue *)local_250);
      lib::L2CValue::_L2CValue((L2CValue *)local_250);
      lib::L2CValue::_L2CValue((L2CValue *)auStack720);
      pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack640,0x162d277af);
      lib::L2CValue::L2CValue((L2CValue *)local_250,0.0);
      lib::L2CValue::operator_(pLVar7,(L2CValue *)local_250);
      lib::L2CValue::_L2CValue((L2CValue *)local_250);
      lib::L2CValue::L2CValue((L2CValue *)local_250,0x19e095c6a8);
      lib::L2CValue::operator_(aLStack560,(L2CValue *)local_250);
      lib::L2CValue::_L2CValue((L2CValue *)local_250);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack720 + 0x10));
    }
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  }
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack368,0x18cdc1683);
  pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack368,0x1fbdb2615);
  fVar16 = (float)app::lua_bind::GroundModule__get_z_impl(*ppBVar15);
  lib::L2CValue::L2CValue((L2CValue *)(auStack720 + 0x10),fVar16);
  pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack640,0x18cdc1683);
  pLVar12 = (L2CValue *)lib::L2CValue::operator__(aLStack640,0x1fbdb2615);
  this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack640,0x162d277af);
  HVar13 = lib::L2CValue::as_hash(aLStack560);
  uVar6 = lib::L2CValue::as_number(pLVar7);
  lVar21 = lib::L2CValue::as_number(pLVar10);
  uVar5 = lib::L2CValue::as_number((L2CValue *)(auStack720 + 0x10));
  local_250._0_8_ = (void **)(uVar6 & 0xffffffff | lVar21 << 0x20);
  local_250._8_8_ = (lua_State *)(ulong)uVar5;
  uVar6 = lib::L2CValue::as_number(pLVar11);
  lVar21 = lib::L2CValue::as_number(pLVar12);
  uVar5 = lib::L2CValue::as_number(this_01);
  local_a0 = uVar6 & 0xffffffff | lVar21 << 0x20;
  uStack152 = (ulong)uVar5;
  uVar5 = app::lua_bind::EffectModule__req_impl
                    (*ppBVar15,HVar13,(Vector3f *)local_250,(Vector3f *)&local_a0,1.0,0,-1,false,0);
  lib::L2CValue::L2CValue(aLStack784,uVar5);
  lib::L2CValue::_L2CValue(aLStack784);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack720 + 0x10));
  lib::L2CValue::L2CValue
            ((L2CValue *)local_250,_WEAPON_DEMON_BLASTER_STATUS_WORK_ID_FLAG_HIT_GROUND);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)local_250);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar15,iVar4);
  lib::L2CValue::_L2CValue((L2CValue *)local_250);
  lib::L2CValue::L2CValue(aLStack800,_WEAPON_DEMON_BLASTER_STATUS_KIND_STAY);
  lib::L2CValue::L2CValue(aLStack816,false);
  lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xe0,(L2CValue)0xd0);
  lib::L2CValue::_L2CValue(aLStack816);
  lib::L2CValue::_L2CValue(aLStack800);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack640);
  lib::L2CValue::_L2CValue(aLStack560);
  lib::L2CValue::_L2CValue((L2CValue *)auStack448);
  lib::L2CValue::_L2CValue(aLStack384);
  this_02 = auStack368;
LAB_71000040a0:
  lib::L2CValue::_L2CValue((L2CValue *)this_02);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack176);
  return;
}

