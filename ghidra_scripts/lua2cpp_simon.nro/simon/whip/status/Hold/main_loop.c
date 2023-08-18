
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponSimonWhip::status::Hold_main_loop(L2CWeaponSimonWhip *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  void *pvVar9;
  BattleObjectModuleAccessor *pBVar10;
  L2CValue *pLVar11;
  ulong uVar12;
  L2CValue *pLVar13;
  L2CValue *this_00;
  Weapon *pWVar14;
  Hash40 HVar15;
  Hash40 HVar16;
  void ***pppvVar17;
  L2CValue *pLVar18;
  L2CValue *pLVar19;
  int iVar20;
  BattleObjectModuleAccessor **ppBVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  long lVar27;
  int in_stack_fffffffffffffad4;
  undefined in_stack_fffffffffffffadc;
  void **appvStack1248 [2];
  L2CValue aLStack1232 [16];
  L2CValue aLStack1216 [16];
  L2CValue aLStack1200 [16];
  L2CValue aLStack1184 [16];
  L2CValue aLStack1168 [16];
  void **appvStack1152 [2];
  L2CValue aLStack1136 [16];
  L2CValue aLStack1120 [16];
  L2CValue aLStack1104 [16];
  void **appvStack1088 [2];
  L2CValue aLStack1072 [16];
  L2CValue aLStack1056 [16];
  L2CValue aLStack1040 [16];
  void **appvStack1024 [2];
  L2CValue aLStack1008 [16];
  L2CValue aLStack992 [16];
  L2CValue aLStack976 [16];
  L2CValue aLStack960 [16];
  L2CValue aLStack944 [16];
  L2CValue aLStack928 [16];
  L2CValue aLStack912 [16];
  L2CValue aLStack896 [16];
  L2CValue aLStack880 [16];
  L2CValue aLStack864 [16];
  L2CValue aLStack848 [16];
  L2CValue aLStack832 [16];
  L2CValue aLStack816 [16];
  L2CValue aLStack800 [16];
  L2CValue aLStack784 [16];
  L2CValue aLStack768 [16];
  L2CValue aLStack752 [16];
  L2CValue aLStack736 [16];
  L2CValue aLStack720 [16];
  L2CValue aLStack704 [16];
  L2CValue aLStack688 [16];
  L2CValue aLStack672 [16];
  undefined auStack656 [16];
  undefined auStack640 [32];
  L2CValue aLStack608 [16];
  void **appvStack592 [2];
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
  undefined8 local_90;
  undefined8 uStack136;
  void **local_80;
  lua_State *plStack120;
  
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x50,(L2CValue)0x40);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack224,0.0);
  lib::L2CValue::L2CValue(aLStack240,0.0);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x20,(L2CValue)0x10);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_80,_WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_FLOAT_HOLD_STICK_X);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
  ppBVar21 = &this->moduleAccessor;
  fVar22 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar21,iVar4);
  lib::L2CValue::L2CValue(aLStack256,fVar22);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_80,_WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_FLOAT_HOLD_STICK_Y);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
  fVar22 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar21,iVar4);
  lib::L2CValue::L2CValue(aLStack272,fVar22);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,_WEAPON_INSTANCE_WORK_ID_INT_LINK_OWNER);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar21,iVar4);
  lib::L2CValue::L2CValue(aLStack288,iVar4);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  uVar5 = lib::L2CValue::as_integer(aLStack288);
  bVar1 = app::sv_battle_object::is_null(uVar5);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_80,false);
  uVar8 = lib::L2CValue::operator__((L2CValue *)&local_90,(L2CValue *)&local_80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  if ((uVar8 & 1) == 0) {
LAB_7100028a7c:
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  }
  else {
    uVar5 = lib::L2CValue::as_integer(aLStack288);
    bVar1 = app::sv_battle_object::is_active(uVar5);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    if ((bVar2 & 1U) != 0) {
      uVar5 = lib::L2CValue::as_integer(aLStack288);
      pvVar9 = (void *)app::sv_battle_object::module_accessor(uVar5);
      if (pvVar9 == (void *)0x0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_90,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_90,pvVar9);
      }
      pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer((L2CValue *)&local_90);
      fVar22 = (float)app::lua_bind::ControlModule__get_stick_x_impl(pBVar10);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,fVar22);
      pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
      lib::L2CValue::operator_(pLVar11,(L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer((L2CValue *)&local_90);
      fVar22 = (float)app::lua_bind::ControlModule__get_stick_y_impl(pBVar10);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,fVar22);
      pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
      lib::L2CValue::operator_(pLVar11,(L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,0.0);
      lib::L2CValue::operator_(pLVar11,(L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_80,_WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_FLOAT_HOLD_STICK_X);
      fVar22 = (float)lib::L2CValue::as_number(aLStack304);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar21,fVar22,iVar4);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::_L2CValue(aLStack304);
      pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,0.0);
      lib::L2CValue::operator_(pLVar11,(L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_80,_WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_FLOAT_HOLD_STICK_Y);
      fVar22 = (float)lib::L2CValue::as_number(aLStack304);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar21,fVar22,iVar4);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::_L2CValue(aLStack304);
      goto LAB_7100028a7c;
    }
  }
  pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
  lib::L2CValue::operator_(pLVar11,aLStack256);
  pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x18cdc1683);
  lib::L2CValue::operator_(pLVar11,(L2CValue *)&local_80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
  lib::L2CValue::operator_(pLVar11,aLStack272);
  pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x1fbdb2615);
  lib::L2CValue::operator_(pLVar11,(L2CValue *)&local_80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::L2CValue(aLStack320,aLStack160);
  lua2cpp::L2CFighterBase::Vector2__length(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::L2CValue(aLStack352,aLStack208);
  lua2cpp::L2CFighterBase::Vector2__length(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_80,_WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_INT_HOLD_MOVE_STICK_COUNT);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
  app::lua_bind::WorkModule__dec_int_impl(*ppBVar21,iVar4);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::L2CValue(aLStack368,_WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_INT_HOLD_MOVE_STICK_COUNT);
  iVar4 = lib::L2CValue::as_integer(aLStack368);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar21,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,0);
  uVar8 = lib::L2CValue::operator_((L2CValue *)&local_90,(L2CValue *)&local_80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue(aLStack368);
  if ((uVar8 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_80,0);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_90,_WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_INT_HOLD_MOVE_STICK_COUNT);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
    iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar21,iVar4,iVar6);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_80,0xac7504e44);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,0xf07b7a221);
  uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_80);
  uVar12 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  fVar22 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar21,uVar8,uVar12);
  lib::L2CValue::L2CValue(aLStack368,fVar22);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,0xac7504e44);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,0x157c3daa92);
  uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_80);
  uVar12 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar21,uVar8,uVar12);
  lib::L2CValue::L2CValue(aLStack384,iVar4);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::L2CValue(aLStack400,_WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_INT_HOLD_REINPUT_COUNTER);
  iVar4 = lib::L2CValue::as_integer(aLStack400);
  iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar21,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,0);
  uVar8 = lib::L2CValue::operator_((L2CValue *)&local_80,(L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue(aLStack400);
  if ((uVar8 & 1) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_80,_WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_INT_HOLD_REINPUT_COUNTER);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
    app::lua_bind::WorkModule__dec_int_impl(*ppBVar21,iVar4);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  }
  fVar22 = 0.0;
  lib::L2CValue::L2CValue(aLStack400,0.75);
  uVar8 = lib::L2CValue::operator_(aLStack400,aLStack304);
  if (((uVar8 & 1) != 0) &&
     (uVar8 = lib::L2CValue::operator_(aLStack368,aLStack336), (uVar8 & 1) != 0)) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_80,_WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_INT_HOLD_MOVE_STICK_COUNT);
    iVar4 = lib::L2CValue::as_integer(aLStack384);
    iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_80);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar21,iVar4,iVar6);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,0xac7504e44);
    lib::L2CValue::L2CValue(aLStack416,0x249923a120);
    uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_80);
    uVar12 = lib::L2CValue::as_integer(aLStack416);
    fVar23 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar21,uVar8,uVar12);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar23);
    lib::L2CValue::_L2CValue(aLStack416);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,0x1b);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
    uVar26 = app::lua_bind::PhysicsModule__get_2nd_speed_impl(*ppBVar21,iVar4);
    lib::L2CValue::L2CValue(aLStack464,(float)uVar26);
    lib::L2CValue::L2CValue(aLStack448,(float)((ulong)uVar26 >> 0x20));
    lib::L2CValue::L2CValue(aLStack432,fVar22);
    FUN_71000030b0(aLStack416,this,aLStack464);
    lib::L2CValue::_L2CValue(aLStack432);
    lib::L2CValue::_L2CValue(aLStack448);
    lib::L2CValue::_L2CValue(aLStack464);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::L2CValue(aLStack496,0.0);
    lib::L2CValue::L2CValue(aLStack512,0.0);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x10,(L2CValue)0x0);
    lib::L2CValue::_L2CValue(aLStack512);
    lib::L2CValue::_L2CValue(aLStack496);
    pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack416,0x18cdc1683);
    pLVar13 = (L2CValue *)lib::L2CValue::operator__(aLStack480,0x18cdc1683);
    lib::L2CValue::operator_(pLVar13,pLVar11);
    pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack416,0x1fbdb2615);
    pLVar13 = (L2CValue *)lib::L2CValue::operator__(aLStack480,0x1fbdb2615);
    lib::L2CValue::operator_(pLVar13,pLVar11);
    lib::L2CValue::L2CValue(aLStack544,aLStack480);
    lua2cpp::L2CFighterBase::Vector2__length(this,(L2CValue)0xe0);
    lib::L2CValue::_L2CValue(aLStack544);
    uVar8 = lib::L2CValue::operator_(aLStack528,(L2CValue *)&local_90);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack560,false);
      lib::L2CValue::L2CValue
                ((L2CValue *)appvStack592,
                 _WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_INT_HOLD_REINPUT_COUNTER);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)appvStack592);
      iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar21,iVar4);
      lib::L2CValue::L2CValue(aLStack576,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,0);
      uVar8 = lib::L2CValue::operator__(aLStack576,(L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::_L2CValue(aLStack576);
      lib::L2CValue::_L2CValue((L2CValue *)appvStack592);
      if ((uVar8 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_80,0xac7504e44);
        lib::L2CValue::L2CValue((L2CValue *)appvStack592,0x22738a587f);
        uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_80);
        uVar12 = lib::L2CValue::as_integer((L2CValue *)appvStack592);
        fVar22 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar21,uVar8,uVar12);
        lib::L2CValue::L2CValue(aLStack576,fVar22);
        lib::L2CValue::_L2CValue((L2CValue *)appvStack592);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::L2CValue(aLStack608,0.0);
        lib::L2CValue::L2CValue((L2CValue *)(auStack640 + 0x10),0.0);
        lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xa0,(L2CValue)0x90);
        lib::L2CValue::_L2CValue((L2CValue *)(auStack640 + 0x10));
        lib::L2CValue::_L2CValue(aLStack608);
        lib::L2CValue::L2CValue
                  ((L2CValue *)auStack640,
                   _WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_FLOAT_HOLD_STICK_X_REINPUT);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack640);
        fVar22 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar21,iVar4);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,fVar22);
        pLVar11 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)appvStack592,0x18cdc1683);
        lib::L2CValue::operator_(pLVar11,(L2CValue *)&local_80);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::_L2CValue((L2CValue *)auStack640);
        lib::L2CValue::L2CValue
                  ((L2CValue *)auStack640,
                   _WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_FLOAT_HOLD_STICK_Y_REINPUT);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack640);
        fVar22 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar21,iVar4);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,fVar22);
        pLVar11 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)appvStack592,0x1fbdb2615);
        lib::L2CValue::operator_(pLVar11,(L2CValue *)&local_80);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::_L2CValue((L2CValue *)auStack640);
        pLVar11 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)appvStack592,0x18cdc1683);
        pLVar13 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)appvStack592,0x1fbdb2615);
        pLVar19 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
        pLVar18 = (L2CValue *)0x1fbdb2615;
        this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
        fVar22 = (float)lib::L2CValue::as_number(pLVar11);
        fVar23 = (float)lib::L2CValue::as_number(pLVar13);
        fVar24 = (float)lib::L2CValue::as_number(pLVar19);
        fVar25 = (float)lib::L2CValue::as_number(this_00);
        fVar22 = (float)app::sv_math::vec2_angle(fVar22,fVar23,fVar24,fVar25);
        lib::L2CValue::L2CValue((L2CValue *)auStack640,fVar22);
        lib::L2CAgent::math_deg((L2CAgent *)auStack640,pLVar18);
        lib::L2CAgent::math_abs((L2CAgent *)auStack656,pLVar18);
        uVar8 = lib::L2CValue::operator__((L2CValue *)&local_80,aLStack576);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::_L2CValue((L2CValue *)auStack656);
        if ((uVar8 & 1) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_80,0xac7504e44);
          lib::L2CValue::L2CValue(aLStack672,0x22c6f321bb);
          uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_80);
          uVar12 = lib::L2CValue::as_integer(aLStack672);
          iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar21,uVar8,uVar12);
          lib::L2CValue::L2CValue((L2CValue *)auStack656,iVar4);
          lib::L2CValue::_L2CValue(aLStack672);
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
          lib::L2CValue::L2CValue((L2CValue *)&local_80,0.0);
          lib::L2CValue::operator_(pLVar11,(L2CValue *)&local_80);
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_80,
                     _WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_FLOAT_HOLD_STICK_X_REINPUT);
          fVar22 = (float)lib::L2CValue::as_number(aLStack672);
          iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
          app::lua_bind::WorkModule__set_float_impl(*ppBVar21,fVar22,iVar4);
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          lib::L2CValue::_L2CValue(aLStack672);
          pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
          lib::L2CValue::L2CValue((L2CValue *)&local_80,0.0);
          lib::L2CValue::operator_(pLVar11,(L2CValue *)&local_80);
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_80,
                     _WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_FLOAT_HOLD_STICK_Y_REINPUT);
          fVar22 = (float)lib::L2CValue::as_number(aLStack672);
          iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
          app::lua_bind::WorkModule__set_float_impl(*ppBVar21,fVar22,iVar4);
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          lib::L2CValue::_L2CValue(aLStack672);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_80,
                     _WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_INT_HOLD_REINPUT_COUNTER);
          iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack656);
          iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_80);
          app::lua_bind::WorkModule__set_int_impl(*ppBVar21,iVar4,iVar6);
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          pppvVar17 = (void ***)auStack656;
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)&local_80,true);
          lib::L2CValue::operator_(aLStack560,(L2CValue *)&local_80);
          pppvVar17 = &local_80;
        }
        lib::L2CValue::_L2CValue((L2CValue *)pppvVar17);
        lib::L2CValue::_L2CValue((L2CValue *)auStack640);
        pppvVar17 = appvStack592;
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_80,0xac7504e44);
        lib::L2CValue::L2CValue((L2CValue *)appvStack592,0x22c6f321bb);
        uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_80);
        uVar12 = lib::L2CValue::as_integer((L2CValue *)appvStack592);
        iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar21,uVar8,uVar12);
        lib::L2CValue::L2CValue(aLStack576,iVar4);
        lib::L2CValue::_L2CValue((L2CValue *)appvStack592);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,0.0);
        lib::L2CValue::operator_(pLVar11,(L2CValue *)&local_80);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_80,
                   _WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_FLOAT_HOLD_STICK_X_REINPUT);
        fVar22 = (float)lib::L2CValue::as_number((L2CValue *)appvStack592);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
        app::lua_bind::WorkModule__set_float_impl(*ppBVar21,fVar22,iVar4);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::_L2CValue((L2CValue *)appvStack592);
        pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,0.0);
        lib::L2CValue::operator_(pLVar11,(L2CValue *)&local_80);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_80,
                   _WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_FLOAT_HOLD_STICK_Y_REINPUT);
        fVar22 = (float)lib::L2CValue::as_number((L2CValue *)appvStack592);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
        app::lua_bind::WorkModule__set_float_impl(*ppBVar21,fVar22,iVar4);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::_L2CValue((L2CValue *)appvStack592);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_80,
                   _WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_INT_HOLD_REINPUT_COUNTER);
        iVar4 = lib::L2CValue::as_integer(aLStack576);
        iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_80);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar21,iVar4,iVar6);
        pppvVar17 = &local_80;
      }
      lib::L2CValue::_L2CValue((L2CValue *)pppvVar17);
      lib::L2CValue::_L2CValue(aLStack576);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,0xac7504e44);
      lib::L2CValue::L2CValue((L2CValue *)appvStack592,0x1aa114a97d);
      uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_80);
      uVar12 = lib::L2CValue::as_integer((L2CValue *)appvStack592);
      fVar22 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar21,uVar8,uVar12);
      lib::L2CValue::L2CValue(aLStack576,fVar22);
      lib::L2CValue::_L2CValue((L2CValue *)appvStack592);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,0xac7504e44);
      lib::L2CValue::L2CValue((L2CValue *)auStack640,0x1a9c7480cd);
      uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_80);
      uVar12 = lib::L2CValue::as_integer((L2CValue *)auStack640);
      fVar22 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar21,uVar8,uVar12);
      lib::L2CValue::L2CValue((L2CValue *)appvStack592,fVar22);
      lib::L2CValue::_L2CValue((L2CValue *)auStack640);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x1fbdb2615);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,0.0);
      uVar8 = lib::L2CValue::operator_(pLVar11,(L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      if ((uVar8 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)auStack640,0xac7504e44);
        lib::L2CValue::L2CValue((L2CValue *)auStack656,0x20be5f904c);
        uVar8 = lib::L2CValue::as_integer((L2CValue *)auStack640);
        uVar12 = lib::L2CValue::as_integer((L2CValue *)auStack656);
        fVar22 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar21,uVar8,uVar12);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,fVar22);
        lib::L2CValue::operator_((L2CValue *)appvStack592,(L2CValue *)&local_80);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::_L2CValue((L2CValue *)auStack656);
        lib::L2CValue::_L2CValue((L2CValue *)auStack640);
      }
      lib::L2CValue::L2CValue((L2CValue *)&local_80,0xac7504e44);
      lib::L2CValue::L2CValue((L2CValue *)auStack656,0x1313fbd4d2);
      uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_80);
      uVar12 = lib::L2CValue::as_integer((L2CValue *)auStack656);
      fVar22 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar21,uVar8,uVar12);
      lib::L2CValue::L2CValue((L2CValue *)auStack640,fVar22);
      lib::L2CValue::_L2CValue((L2CValue *)auStack656);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::operator_(aLStack576,(L2CValue *)auStack640);
      lib::L2CValue::operator_((L2CValue *)appvStack592,(L2CValue *)auStack640);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,false);
      uVar8 = lib::L2CValue::operator__(aLStack560,(L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      if ((uVar8 & 1) != 0) {
        pLVar11 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,0x1b);
        pLVar13 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x18cdc1683);
        lib::L2CValue::operator_(pLVar13,(L2CValue *)auStack656);
        pLVar13 = (L2CValue *)lib::L2CValue::operator__(aLStack208,0x1fbdb2615);
        lib::L2CValue::operator_(pLVar13,aLStack672);
        pWVar14 = (Weapon *)lib::L2CValue::as_pointer(pLVar11);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
        fVar22 = (float)lib::L2CValue::as_number(aLStack688);
        fVar23 = (float)lib::L2CValue::as_number(aLStack704);
        app::WeaponSpecializer_SimonWhip::add_speed(pWVar14,iVar4,fVar22,fVar23);
        lib::L2CValue::_L2CValue(aLStack704);
        lib::L2CValue::_L2CValue(aLStack688);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      }
      lib::L2CValue::_L2CValue(aLStack672);
      lib::L2CValue::_L2CValue((L2CValue *)auStack656);
      lib::L2CValue::_L2CValue((L2CValue *)auStack640);
      lib::L2CValue::_L2CValue((L2CValue *)appvStack592);
      lib::L2CValue::_L2CValue(aLStack576);
      lib::L2CValue::_L2CValue(aLStack560);
    }
    lib::L2CValue::_L2CValue(aLStack528);
    lib::L2CValue::_L2CValue(aLStack480);
    lib::L2CValue::_L2CValue(aLStack416);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  }
  lib::L2CValue::L2CValue(aLStack416,false);
  uVar8 = lib::L2CValue::operator_(aLStack400,aLStack304);
  if ((uVar8 & 1) == 0) {
LAB_7100029fd4:
    lib::L2CValue::L2CValue((L2CValue *)&local_80,0xac7504e44);
    lib::L2CValue::L2CValue(aLStack480,0x15f8ab6943);
    uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_80);
    uVar12 = lib::L2CValue::as_integer(aLStack480);
    fVar22 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar21,uVar8,uVar12);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar22);
    lib::L2CValue::_L2CValue(aLStack480);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,0xac7504e44);
    lib::L2CValue::L2CValue(aLStack528,0xc6e1b9cc3);
    uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_80);
    uVar12 = lib::L2CValue::as_integer(aLStack528);
    fVar22 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar21,uVar8,uVar12);
    lib::L2CValue::L2CValue(aLStack480,fVar22);
    lib::L2CValue::_L2CValue(aLStack528);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,0xac7504e44);
    lib::L2CValue::L2CValue(aLStack560,0xe81be1d33);
    uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_80);
    uVar12 = lib::L2CValue::as_integer(aLStack560);
    fVar22 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar21,uVar8,uVar12);
    lib::L2CValue::L2CValue(aLStack528,fVar22);
    lib::L2CValue::_L2CValue(aLStack560);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,0.0);
    lib::L2CValue::operator_(aLStack480,(L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_80,_WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_FLOAT_DEFAULT_GRAVITY);
    fVar22 = (float)lib::L2CValue::as_number(aLStack560);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar21,fVar22,iVar4);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue(aLStack560);
    uVar26 = 0;
    lib::L2CValue::L2CValue((L2CValue *)&local_80,0.0);
    lib::L2CValue::operator_(aLStack528,(L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_80,
               _WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_FLOAT_DEFAULT_AIR_RESISTANCE);
    fVar22 = (float)lib::L2CValue::as_number(aLStack560);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar21,fVar22,iVar4);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue(aLStack560);
    lib::L2CValue::L2CValue(aLStack560,0xac7504e44);
    lib::L2CValue::L2CValue(aLStack576,0x118a9f675b);
    uVar8 = lib::L2CValue::as_integer(aLStack560);
    uVar12 = lib::L2CValue::as_integer(aLStack576);
    fVar22 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar21,uVar8,uVar12);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,fVar22);
    fVar22 = (float)lib::L2CValue::as_number((L2CValue *)&local_80);
    app::lua_bind::PhysicsModule__set_2nd_restitution_range_impl(*ppBVar21,fVar22);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue(aLStack576);
    lib::L2CValue::_L2CValue(aLStack560);
    fVar22 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
    fVar23 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
    app::lua_bind::PhysicsModule__set_2nd_restitution_rate_impl(*ppBVar21,fVar22,fVar23);
    fVar22 = (float)lib::L2CValue::as_number(aLStack480);
    app::lua_bind::PhysicsModule__set_2nd_gravity_impl(*ppBVar21,fVar22);
    fVar22 = (float)lib::L2CValue::as_number(aLStack528);
    app::lua_bind::PhysicsModule__set_2nd_air_resistance_impl(*ppBVar21,fVar22);
    lib::L2CValue::L2CValue(aLStack560,0xac7504e44);
    lib::L2CValue::L2CValue(aLStack576,0x101d4f113c);
    uVar8 = lib::L2CValue::as_integer(aLStack560);
    uVar12 = lib::L2CValue::as_integer(aLStack576);
    fVar22 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar21,uVar8,uVar12);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,fVar22);
    fVar22 = (float)lib::L2CValue::as_number((L2CValue *)&local_80);
    app::lua_bind::PhysicsModule__set_2nd_water_resistance_impl(*ppBVar21,fVar22);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue(aLStack576);
    lib::L2CValue::_L2CValue(aLStack560);
    FUN_710002d3b0(this);
  }
  else {
    lib::L2CValue::L2CValue
              (aLStack480,_WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_INT_HOLD_MOVE_STICK_COUNT);
    iVar4 = lib::L2CValue::as_integer(aLStack480);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar21,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,0);
    uVar8 = lib::L2CValue::operator_((L2CValue *)&local_80,(L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue(aLStack480);
    if ((uVar8 & 1) == 0) goto LAB_7100029fd4;
    lib::L2CValue::L2CValue((L2CValue *)&local_80,0xac7504e44);
    lib::L2CValue::L2CValue(aLStack480,0x207b27d5d9);
    uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_80);
    uVar12 = lib::L2CValue::as_integer(aLStack480);
    fVar22 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar21,uVar8,uVar12);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar22);
    lib::L2CValue::_L2CValue(aLStack480);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,0xac7504e44);
    lib::L2CValue::L2CValue(aLStack528,0xc17849182);
    uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_80);
    uVar12 = lib::L2CValue::as_integer(aLStack528);
    fVar22 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar21,uVar8,uVar12);
    lib::L2CValue::L2CValue(aLStack480,fVar22);
    lib::L2CValue::_L2CValue(aLStack528);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,0xac7504e44);
    lib::L2CValue::L2CValue(aLStack560,0x1328089fea);
    uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_80);
    uVar12 = lib::L2CValue::as_integer(aLStack560);
    fVar22 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar21,uVar8,uVar12);
    lib::L2CValue::L2CValue(aLStack528,fVar22);
    lib::L2CValue::_L2CValue(aLStack560);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,0.0);
    lib::L2CValue::operator_(aLStack480,(L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_80,_WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_FLOAT_DEFAULT_GRAVITY);
    fVar22 = (float)lib::L2CValue::as_number(aLStack560);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar21,fVar22,iVar4);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue(aLStack560);
    fVar24 = 0.0;
    lib::L2CValue::L2CValue((L2CValue *)&local_80,0.0);
    lib::L2CValue::operator_(aLStack528,(L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_80,
               _WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_FLOAT_DEFAULT_AIR_RESISTANCE);
    fVar22 = (float)lib::L2CValue::as_number(aLStack560);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar21,fVar22,iVar4);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue(aLStack560);
    lib::L2CValue::L2CValue(aLStack560,0xac7504e44);
    lib::L2CValue::L2CValue(aLStack576,0x162370853d);
    uVar8 = lib::L2CValue::as_integer(aLStack560);
    uVar12 = lib::L2CValue::as_integer(aLStack576);
    fVar22 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar21,uVar8,uVar12);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,fVar22);
    fVar22 = (float)lib::L2CValue::as_number((L2CValue *)&local_80);
    app::lua_bind::PhysicsModule__set_2nd_restitution_range_impl(*ppBVar21,fVar22);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue(aLStack576);
    lib::L2CValue::_L2CValue(aLStack560);
    fVar22 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
    fVar23 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
    app::lua_bind::PhysicsModule__set_2nd_restitution_rate_impl(*ppBVar21,fVar22,fVar23);
    fVar22 = (float)lib::L2CValue::as_number(aLStack480);
    app::lua_bind::PhysicsModule__set_2nd_gravity_impl(*ppBVar21,fVar22);
    fVar22 = (float)lib::L2CValue::as_number(aLStack528);
    app::lua_bind::PhysicsModule__set_2nd_air_resistance_impl(*ppBVar21,fVar22);
    lib::L2CValue::L2CValue(aLStack560,0xac7504e44);
    lib::L2CValue::L2CValue(aLStack576,0x154e0324d0);
    uVar8 = lib::L2CValue::as_integer(aLStack560);
    uVar12 = lib::L2CValue::as_integer(aLStack576);
    fVar22 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar21,uVar8,uVar12);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,fVar22);
    fVar22 = (float)lib::L2CValue::as_number((L2CValue *)&local_80);
    app::lua_bind::PhysicsModule__set_2nd_water_resistance_impl(*ppBVar21,fVar22);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue(aLStack576);
    lib::L2CValue::_L2CValue(aLStack560);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,0xac7504e44);
    lib::L2CValue::L2CValue(aLStack576,0x1c6185e722);
    uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_80);
    uVar12 = lib::L2CValue::as_integer(aLStack576);
    fVar22 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar21,uVar8,uVar12);
    lib::L2CValue::L2CValue(aLStack560,fVar22);
    lib::L2CValue::_L2CValue(aLStack576);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,0x1b);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
    uVar26 = app::lua_bind::PhysicsModule__get_2nd_speed_impl(*ppBVar21,iVar4);
    lib::L2CValue::L2CValue(aLStack752,(float)uVar26);
    lib::L2CValue::L2CValue(aLStack736,(float)((ulong)uVar26 >> 0x20));
    uVar26 = 0;
    lib::L2CValue::L2CValue(aLStack720,fVar24);
    FUN_71000030b0(aLStack576,this,aLStack752);
    lib::L2CValue::_L2CValue(aLStack720);
    lib::L2CValue::_L2CValue(aLStack736);
    lib::L2CValue::_L2CValue(aLStack752);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack576,0x18cdc1683);
    pLVar13 = (L2CValue *)lib::L2CValue::operator__(aLStack576,0x1fbdb2615);
    fVar22 = (float)lib::L2CValue::as_number(pLVar11);
    fVar23 = (float)lib::L2CValue::as_number(pLVar13);
    fVar22 = (float)app::sv_math::vec2_length(fVar22,fVar23);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,fVar22);
    uVar8 = lib::L2CValue::operator__(aLStack560,(L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_80,0xac7504e44);
      lib::L2CValue::L2CValue((L2CValue *)auStack640,0x1ff1394bdd);
      uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_80);
      uVar12 = lib::L2CValue::as_integer((L2CValue *)auStack640);
      iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar21,uVar8,uVar12);
      lib::L2CValue::L2CValue((L2CValue *)appvStack592,iVar4);
      lib::L2CValue::_L2CValue((L2CValue *)auStack640);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,1);
      lib::L2CValue::operator_((L2CValue *)appvStack592,(L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack640);
      lib::L2CValue::_L2CValue((L2CValue *)auStack640);
      if (-1 < iVar4) {
        iVar6 = -1;
        iVar20 = 0x1b;
        do {
          lib::L2CValue::L2CValue((L2CValue *)&local_80,iVar20);
          lib::L2CValue::L2CValue((L2CValue *)auStack640,true);
          uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_80);
          bVar1 = lib::L2CValue::as_bool((L2CValue *)auStack640);
          app::lua_bind::PhysicsModule__set_2nd_disable_collision_impl
                    (*ppBVar21,uVar5,(bool)(bVar1 & 1));
          lib::L2CValue::_L2CValue((L2CValue *)auStack640);
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
          iVar6 = iVar6 + 1;
          iVar20 = iVar20 + -1;
        } while (iVar6 < iVar4);
      }
      lib::L2CValue::_L2CValue((L2CValue *)appvStack592);
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_80,true);
    lib::L2CValue::operator_(aLStack416,(L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_80,_WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_FLAG_HOLD_BOUND_SE_ONCE);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar21,iVar4);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue(aLStack576);
    lib::L2CValue::_L2CValue(aLStack560);
  }
  lib::L2CValue::_L2CValue(aLStack528);
  lib::L2CValue::_L2CValue(aLStack480);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,_WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_FLAG_HOLD_WALL);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar21,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  fVar22 = (float)uVar26;
  if ((bVar2 & 1U) != 0) {
    uVar5 = 0;
    do {
      lib::L2CValue::L2CValue((L2CValue *)&local_80,uVar5);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,true);
      uVar7 = lib::L2CValue::as_integer((L2CValue *)&local_80);
      bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_90);
      app::lua_bind::PhysicsModule__set_2nd_disable_collision_impl
                (*ppBVar21,uVar7,(bool)(bVar1 & 1));
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      fVar22 = (float)uVar26;
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x1c);
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_90,_WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_FLAG_HOLD_ATTACK_SLEEP);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar21,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_80,_WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_FLAG_HOLD_ATTACK_SLEEP);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar21,iVar4);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,_WEAPON_ANIMCMD_GAME);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,0x1a8d88057e);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
    HVar15 = lib::L2CValue::as_hash((L2CValue *)&local_90);
    app::lua_bind::MotionAnimcmdModule__call_script_single_impl(*ppBVar21,iVar4,HVar15,-1);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,false);
    bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_80);
    app::lua_bind::AttackModule__sleep_impl(*ppBVar21,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_80,0x1b);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
  uVar26 = app::lua_bind::PhysicsModule__get_2nd_speed_impl(*ppBVar21,iVar4);
  lib::L2CValue::L2CValue(aLStack800,(float)uVar26);
  lib::L2CValue::L2CValue(aLStack784,(float)((ulong)uVar26 >> 0x20));
  lib::L2CValue::L2CValue(aLStack768,fVar22);
  FUN_71000030b0(aLStack480,this,aLStack800);
  lib::L2CValue::_L2CValue(aLStack768);
  lib::L2CValue::_L2CValue(aLStack784);
  lib::L2CValue::_L2CValue(aLStack800);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::L2CValue(aLStack816,0.0);
  lib::L2CValue::L2CValue(aLStack832,0.0);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xd0,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack832);
  lib::L2CValue::_L2CValue(aLStack816);
  pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack480,0x18cdc1683);
  pLVar13 = (L2CValue *)lib::L2CValue::operator__(aLStack528,0x18cdc1683);
  lib::L2CValue::operator_(pLVar13,pLVar11);
  pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack480,0x1fbdb2615);
  pLVar13 = (L2CValue *)lib::L2CValue::operator__(aLStack528,0x1fbdb2615);
  lib::L2CValue::operator_(pLVar13,pLVar11);
  lib::L2CValue::L2CValue(aLStack848,aLStack528);
  lua2cpp::L2CFighterBase::Vector2__length(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack848);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,0.02);
  uVar8 = lib::L2CValue::operator_((L2CValue *)&local_80,aLStack560);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::L2CValue
              (aLStack576,_WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_INT_HOLD_TIP_NODE_MOVE_AFTER_COUNT);
    iVar4 = lib::L2CValue::as_integer(aLStack576);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar21,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,0);
    uVar8 = lib::L2CValue::operator_((L2CValue *)&local_80,(L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue(aLStack576);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_90,_WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_FLAG_VISIBILITY_CHAIN_2);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_90);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar21,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_80,0x14227d141f);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,false);
        lib::L2CValue::L2CValue(aLStack576,false);
        HVar15 = lib::L2CValue::as_hash((L2CValue *)&local_80);
        bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_90);
        bVar3 = lib::L2CValue::as_bool(aLStack576);
        app::lua_bind::EffectModule__kill_kind_impl
                  (*ppBVar21,HVar15,(bool)(bVar1 & 1),(bool)(bVar3 & 1));
        lib::L2CValue::_L2CValue(aLStack576);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      }
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_80,_WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_FLAG_VISIBILITY_CHAIN_2);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar21,iVar4);
      goto LAB_710002aaa0;
    }
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_80,
               _WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_INT_HOLD_TIP_NODE_MOVE_AFTER_COUNT);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
    app::lua_bind::WorkModule__dec_int_impl(*ppBVar21,iVar4);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::L2CValue(aLStack576,0x1b);
    iVar4 = lib::L2CValue::as_integer(aLStack576);
    iVar4 = app::lua_bind::PhysicsModule__get_2nd_touch_ground_line_num_impl(*ppBVar21,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,0);
    uVar8 = lib::L2CValue::operator_((L2CValue *)&local_80,(L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue(aLStack576);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_80,0);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_90,
                 _WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_INT_HOLD_TIP_NODE_MOVE_AFTER_COUNT);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
      iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_90);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar21,iVar4,iVar6);
      goto LAB_710002a868;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack576,_WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_FLAG_VISIBILITY_CHAIN_2);
    iVar4 = lib::L2CValue::as_integer(aLStack576);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar21,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_80,false);
    uVar8 = lib::L2CValue::operator__((L2CValue *)&local_90,(L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue(aLStack576);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack576,0x14227d141f);
      lib::L2CValue::L2CValue((L2CValue *)appvStack592,0xa639e5dcb);
      lib::L2CValue::L2CValue((L2CValue *)auStack640,1.0);
      lib::L2CValue::L2CValue((L2CValue *)auStack656,0.0);
      lib::L2CValue::L2CValue(aLStack672,0.0);
      HVar15 = lib::L2CValue::as_hash(aLStack576);
      HVar16 = lib::L2CValue::as_hash((L2CValue *)appvStack592);
      uVar8 = lib::L2CValue::as_number((L2CValue *)auStack640);
      lVar27 = lib::L2CValue::as_number((L2CValue *)auStack656);
      uVar5 = lib::L2CValue::as_number(aLStack672);
      local_80 = (void **)(uVar8 & 0xffffffff | lVar27 << 0x20);
      plStack120 = (lua_State *)(ulong)uVar5;
      uStack136 = _FIGHTER_STATUS_KIND_DAMAGE_FLY_METEOR;
      local_90 = FIGHTER_STATUS_KIND_DAMAGE_FLY;
      uVar5 = app::lua_bind::EffectModule__req_follow_impl
                        (*ppBVar21,HVar15,HVar16,(Vector3f *)&local_80,(Vector3f *)&local_90,1.0,
                         false,0,0,-1,in_stack_fffffffffffffad4,0,(bool)in_stack_fffffffffffffadc,
                         false);
      lib::L2CValue::L2CValue(aLStack864,uVar5);
      lib::L2CValue::_L2CValue(aLStack864);
      lib::L2CValue::_L2CValue(aLStack672);
      lib::L2CValue::_L2CValue((L2CValue *)auStack656);
      lib::L2CValue::_L2CValue((L2CValue *)auStack640);
      lib::L2CValue::_L2CValue((L2CValue *)appvStack592);
      lib::L2CValue::_L2CValue(aLStack576);
    }
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_80,_WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_FLAG_VISIBILITY_CHAIN_2);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar21,iVar4);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,0x1e);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_90,
               _WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_INT_HOLD_TIP_NODE_MOVE_AFTER_COUNT);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
    iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar21,iVar4,iVar6);
LAB_710002a868:
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
LAB_710002aaa0:
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_80,0xac7504e44);
  lib::L2CValue::L2CValue(aLStack576,0xf810e5d68);
  uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_80);
  uVar12 = lib::L2CValue::as_integer(aLStack576);
  fVar22 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar21,uVar8,uVar12);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar22);
  lib::L2CValue::_L2CValue(aLStack576);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,0xac7504e44);
  lib::L2CValue::L2CValue((L2CValue *)appvStack592,0xfbd036231);
  uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_80);
  uVar12 = lib::L2CValue::as_integer((L2CValue *)appvStack592);
  fVar22 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar21,uVar8,uVar12);
  lib::L2CValue::L2CValue(aLStack576,fVar22);
  lib::L2CValue::_L2CValue((L2CValue *)appvStack592);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,0xac7504e44);
  lib::L2CValue::L2CValue((L2CValue *)auStack640,0xe33add72f);
  uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_80);
  uVar12 = lib::L2CValue::as_integer((L2CValue *)auStack640);
  fVar22 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar21,uVar8,uVar12);
  lib::L2CValue::L2CValue((L2CValue *)appvStack592,fVar22);
  lib::L2CValue::_L2CValue((L2CValue *)auStack640);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,0xac7504e44);
  lib::L2CValue::L2CValue((L2CValue *)auStack656,0xe0fa0e876);
  uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_80);
  uVar12 = lib::L2CValue::as_integer((L2CValue *)auStack656);
  fVar22 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar21,uVar8,uVar12);
  lib::L2CValue::L2CValue((L2CValue *)auStack640,fVar22);
  lib::L2CValue::_L2CValue((L2CValue *)auStack656);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,0xac7504e44);
  lib::L2CValue::L2CValue(aLStack672,0x14d11d9cd1);
  uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_80);
  uVar12 = lib::L2CValue::as_integer(aLStack672);
  fVar22 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar21,uVar8,uVar12);
  lib::L2CValue::L2CValue((L2CValue *)auStack656,fVar22);
  lib::L2CValue::_L2CValue(aLStack672);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,0xac7504e44);
  lib::L2CValue::L2CValue(aLStack688,0x1406f62e90);
  uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_80);
  uVar12 = lib::L2CValue::as_integer(aLStack688);
  fVar22 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar21,uVar8,uVar12);
  lib::L2CValue::L2CValue(aLStack672,fVar22);
  lib::L2CValue::_L2CValue(aLStack688);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,0xac7504e44);
  lib::L2CValue::L2CValue(aLStack704,0x18b22695ce);
  uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_80);
  uVar12 = lib::L2CValue::as_integer(aLStack704);
  fVar22 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar21,uVar8,uVar12);
  lib::L2CValue::L2CValue(aLStack688,fVar22);
  lib::L2CValue::_L2CValue(aLStack704);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::L2CValue(aLStack704,0x14d62866e2);
  lib::L2CValue::L2CValue(aLStack880,0x17f5942982);
  lib::L2CValue::L2CValue(aLStack896,0x176c9d7838);
  lib::L2CValue::L2CValue(aLStack912,0x132e4d3882);
  pLVar11 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,2);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,_WEAPON_KIND_RICHTER_WHIP);
  uVar8 = lib::L2CValue::operator__(pLVar11,(L2CValue *)&local_80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  if ((uVar8 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_80,0x16d70c35fc);
    lib::L2CValue::operator_(aLStack704,(L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,0x194eb94dbf);
    lib::L2CValue::operator_(aLStack880,(L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,0x19d7b01c05);
    lib::L2CValue::operator_(aLStack896,(L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,0x15d16f20c3);
    lib::L2CValue::operator_(aLStack912,(L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  }
  lib::L2CValue::operator_((L2CValue *)auStack656,aLStack672);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,0.0);
  uVar8 = lib::L2CValue::operator_((L2CValue *)&local_80,aLStack928);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::_L2CValue(aLStack928);
  if ((uVar8 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_80,0xac7504e44);
    lib::L2CValue::L2CValue(aLStack944,0x1ecf4bc6d2);
    uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_80);
    uVar12 = lib::L2CValue::as_integer(aLStack944);
    iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar21,uVar8,uVar12);
    lib::L2CValue::L2CValue(aLStack928,iVar4);
    lib::L2CValue::_L2CValue(aLStack944);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,0xac7504e44);
    lib::L2CValue::L2CValue(aLStack960,0x18dc2bbed2);
    uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_80);
    uVar12 = lib::L2CValue::as_integer(aLStack960);
    iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar21,uVar8,uVar12);
    lib::L2CValue::L2CValue(aLStack944,iVar4);
    lib::L2CValue::_L2CValue(aLStack960);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,0xac7504e44);
    lib::L2CValue::L2CValue(aLStack976,0x298d8f5523);
    uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_80);
    uVar12 = lib::L2CValue::as_integer(aLStack976);
    fVar22 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar21,uVar8,uVar12);
    lib::L2CValue::L2CValue(aLStack960,fVar22);
    lib::L2CValue::_L2CValue(aLStack976);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,0xac7504e44);
    lib::L2CValue::L2CValue(aLStack992,0x256bda3689);
    uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_80);
    uVar12 = lib::L2CValue::as_integer(aLStack992);
    iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar21,uVar8,uVar12);
    lib::L2CValue::L2CValue(aLStack976,iVar4);
    lib::L2CValue::_L2CValue(aLStack992);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::operator_(aLStack560,aLStack672);
    lib::L2CValue::operator_(aLStack960,aLStack672);
    lib::L2CValue::operator_((L2CValue *)&local_80,(L2CValue *)appvStack1024);
    lib::L2CValue::L2CValue(aLStack1040,0.0);
    lib::L2CValue::L2CValue(aLStack1056,1.0);
    lua2cpp::L2CFighterBase::clamp(this,(L2CValue)0x10,(L2CValue)0xf0,(L2CValue)0xe0);
    lib::L2CValue::_L2CValue(aLStack1056);
    lib::L2CValue::_L2CValue(aLStack1040);
    lib::L2CValue::_L2CValue(aLStack1008);
    lib::L2CValue::_L2CValue((L2CValue *)appvStack1024);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::operator_(aLStack976,aLStack992);
    lib::L2CValue::operator_(aLStack944,(L2CValue *)appvStack1024);
    lib::L2CValue::operator_(aLStack944,(L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)appvStack1024);
    uVar8 = lib::L2CValue::operator__(aLStack672,aLStack560);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_80,-1);
      lib::L2CValue::L2CValue
                ((L2CValue *)appvStack1024,
                 _WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_INT_HOLD_SE_SPEED_AFTER_FRAME);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
      iVar6 = lib::L2CValue::as_integer((L2CValue *)appvStack1024);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar21,iVar4,iVar6);
      lib::L2CValue::_L2CValue((L2CValue *)appvStack1024);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,-1);
      lib::L2CValue::L2CValue
                ((L2CValue *)appvStack1024,
                 _WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_INT_HOLD_SE_REQUEST_AFTER_FRAME);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
      iVar6 = lib::L2CValue::as_integer((L2CValue *)appvStack1024);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar21,iVar4,iVar6);
      lib::L2CValue::_L2CValue((L2CValue *)appvStack1024);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_80,_WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_FLAG_HOLD_SE_REQUESTED);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar21,iVar4);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      uVar8 = lib::L2CValue::operator_(aLStack400,aLStack304);
      if ((uVar8 & 1) == 0) {
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_80,
                   _WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_FLAG_HOLD_SE_CHAIN_REQUESTED);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
        app::lua_bind::WorkModule__off_flag_impl(*ppBVar21,iVar4);
        goto LAB_710002b810;
      }
      lib::L2CValue::L2CValue((L2CValue *)&local_80,0xac7504e44);
      lib::L2CValue::L2CValue(aLStack1072,0x1fe7374b35);
      uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_80);
      uVar12 = lib::L2CValue::as_integer(aLStack1072);
      iVar4 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar21,uVar8,uVar12);
      lib::L2CValue::L2CValue((L2CValue *)appvStack1024,iVar4);
      lib::L2CValue::_L2CValue(aLStack1072);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,0xac7504e44);
      lib::L2CValue::L2CValue((L2CValue *)appvStack1088,0x1f524e32f1);
      uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_80);
      uVar12 = lib::L2CValue::as_integer((L2CValue *)appvStack1088);
      fVar22 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar21,uVar8,uVar12);
      lib::L2CValue::L2CValue(aLStack1072,fVar22);
      lib::L2CValue::_L2CValue((L2CValue *)appvStack1088);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::L2CValue
                (aLStack1104,_WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_INT_HOLD_CHAIN_SE_STICK_COUNT);
      iVar4 = lib::L2CValue::as_integer(aLStack1104);
      iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar21,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)appvStack1088,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,0);
      uVar8 = lib::L2CValue::operator_((L2CValue *)&local_80,(L2CValue *)appvStack1088);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)appvStack1088);
      lib::L2CValue::_L2CValue(aLStack1104);
      if ((uVar8 & 1) == 0) {
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_80,
                   _WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_FLOAT_HOLD_STICK_X_CHAIN_SE);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
        fVar22 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar21,iVar4);
        lib::L2CValue::L2CValue((L2CValue *)appvStack1088,fVar22);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_80,
                   _WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_FLOAT_HOLD_STICK_Y_CHAIN_SE);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
        fVar22 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar21,iVar4);
        lib::L2CValue::L2CValue(aLStack1104,fVar22);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,0.0);
        lib::L2CValue::operator_(pLVar11,(L2CValue *)&local_80);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_80,
                   _WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_FLOAT_HOLD_STICK_X_CHAIN_SE);
        fVar22 = (float)lib::L2CValue::as_number(aLStack1120);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
        app::lua_bind::WorkModule__set_float_impl(*ppBVar21,fVar22,iVar4);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::_L2CValue(aLStack1120);
        pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,0.0);
        lib::L2CValue::operator_(pLVar11,(L2CValue *)&local_80);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_80,
                   _WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_FLOAT_HOLD_STICK_Y_CHAIN_SE);
        fVar22 = (float)lib::L2CValue::as_number(aLStack1120);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
        app::lua_bind::WorkModule__set_float_impl(*ppBVar21,fVar22,iVar4);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::_L2CValue(aLStack1120);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_80,
                   _WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_INT_HOLD_CHAIN_SE_STICK_COUNT);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)appvStack1024);
        iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_80);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar21,iVar4,iVar6);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::L2CValue
                  (aLStack1136,_WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_FLAG_HOLD_SE_CHAIN_REQUESTED);
        iVar4 = lib::L2CValue::as_integer(aLStack1136);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar21,iVar4);
        lib::L2CValue::L2CValue(aLStack1120,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue((L2CValue *)&local_80,false);
        uVar8 = lib::L2CValue::operator__(aLStack1120,(L2CValue *)&local_80);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::_L2CValue(aLStack1120);
        lib::L2CValue::_L2CValue(aLStack1136);
        if ((uVar8 & 1) == 0) {
          pLVar11 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
          pLVar19 = (L2CValue *)0x1fbdb2615;
          pLVar13 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
          fVar22 = (float)lib::L2CValue::as_number((L2CValue *)appvStack1088);
          fVar23 = (float)lib::L2CValue::as_number(aLStack1104);
          fVar24 = (float)lib::L2CValue::as_number(pLVar11);
          fVar25 = (float)lib::L2CValue::as_number(pLVar13);
          fVar22 = (float)app::sv_math::vec2_angle(fVar22,fVar23,fVar24,fVar25);
          lib::L2CValue::L2CValue((L2CValue *)&local_80,fVar22);
          lib::L2CAgent::math_deg((L2CAgent *)&local_80,pLVar19);
          lib::L2CValue::operator_((L2CValue *)&local_80,aLStack1120);
          lib::L2CValue::_L2CValue(aLStack1120);
          uVar8 = lib::L2CValue::operator_(aLStack1072,(L2CValue *)&local_80);
          if ((uVar8 & 1) != 0) {
            HVar15 = lib::L2CValue::as_hash(aLStack912);
            iVar4 = app::lua_bind::SoundModule__play_status_se_impl
                              (*ppBVar21,HVar15,false,false,false);
            lib::L2CValue::L2CValue(aLStack1168,iVar4);
            lib::L2CValue::_L2CValue(aLStack1168);
          }
          pppvVar17 = &local_80;
        }
        else {
          HVar15 = lib::L2CValue::as_hash(aLStack912);
          iVar4 = app::lua_bind::SoundModule__play_status_se_impl
                            (*ppBVar21,HVar15,false,false,false);
          lib::L2CValue::L2CValue((L2CValue *)appvStack1152,iVar4);
          pppvVar17 = appvStack1152;
        }
        lib::L2CValue::_L2CValue((L2CValue *)pppvVar17);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_80,
                   _WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_FLAG_HOLD_SE_CHAIN_REQUESTED);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar21,iVar4);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::_L2CValue(aLStack1104);
        pppvVar17 = appvStack1088;
      }
      else {
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_80,
                   _WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_INT_HOLD_CHAIN_SE_STICK_COUNT);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
        app::lua_bind::WorkModule__dec_int_impl(*ppBVar21,iVar4);
        pppvVar17 = &local_80;
      }
      lib::L2CValue::_L2CValue((L2CValue *)pppvVar17);
      lib::L2CValue::_L2CValue(aLStack1072);
      pppvVar17 = appvStack1024;
    }
    else {
      lib::L2CValue::L2CValue
                (aLStack1072,_WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_FLAG_HOLD_SE_REQUESTED);
      iVar4 = lib::L2CValue::as_integer(aLStack1072);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar21,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)appvStack1024,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue((L2CValue *)&local_80,false);
      uVar8 = lib::L2CValue::operator__((L2CValue *)appvStack1024,(L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)appvStack1024);
      lib::L2CValue::_L2CValue(aLStack1072);
      if ((uVar8 & 1) == 0) {
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_80,
                   _WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_INT_HOLD_SE_REQUEST_AFTER_FRAME);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
        app::lua_bind::WorkModule__dec_int_impl(*ppBVar21,iVar4);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::L2CValue
                  (aLStack1072,_WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_INT_HOLD_SE_REQUEST_AFTER_FRAME);
        iVar4 = lib::L2CValue::as_integer(aLStack1072);
        iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar21,iVar4);
        lib::L2CValue::L2CValue((L2CValue *)appvStack1024,iVar4);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,0);
        uVar8 = lib::L2CValue::operator_((L2CValue *)appvStack1024,(L2CValue *)&local_80);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::_L2CValue((L2CValue *)appvStack1024);
        lib::L2CValue::_L2CValue(aLStack1072);
        if ((uVar8 & 1) != 0) {
          HVar15 = lib::L2CValue::as_hash(aLStack704);
          iVar4 = app::lua_bind::SoundModule__play_status_se_impl
                            (*ppBVar21,HVar15,false,false,false);
          lib::L2CValue::L2CValue((L2CValue *)&local_80,iVar4);
          lib::L2CValue::L2CValue
                    ((L2CValue *)appvStack1024,
                     _WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_INT_HOLD_SE_HANDLE);
          iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
          iVar6 = lib::L2CValue::as_integer((L2CValue *)appvStack1024);
          app::lua_bind::WorkModule__set_int_impl(*ppBVar21,iVar4,iVar6);
          lib::L2CValue::_L2CValue((L2CValue *)appvStack1024);
          lib::L2CValue::L2CValue((L2CValue *)appvStack1024,0xd487813b4);
          lib::L2CValue::L2CValue(aLStack1072,0);
          lib::L2CValue::L2CValue((L2CValue *)appvStack1088,true);
          HVar15 = lib::L2CValue::as_hash((L2CValue *)appvStack1024);
          iVar4 = lib::L2CValue::as_integer(aLStack1072);
          bVar1 = lib::L2CValue::as_bool((L2CValue *)appvStack1088);
          app::lua_bind::ControlModule__set_rumble_impl
                    (*ppBVar21,HVar15,iVar4,(bool)(bVar1 & 1),0x50000000);
          lib::L2CValue::_L2CValue((L2CValue *)appvStack1088);
          lib::L2CValue::_L2CValue(aLStack1072);
          lib::L2CValue::_L2CValue((L2CValue *)appvStack1024);
          lib::L2CValue::L2CValue
                    ((L2CValue *)appvStack1024,
                     _WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_INT_HOLD_SE_REQUEST_AFTER_FRAME);
          iVar4 = lib::L2CValue::as_integer(aLStack944);
          iVar6 = lib::L2CValue::as_integer((L2CValue *)appvStack1024);
          app::lua_bind::WorkModule__set_int_impl(*ppBVar21,iVar4,iVar6);
          goto LAB_710002b764;
        }
      }
      else {
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_80,
                   _WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_INT_HOLD_SE_SPEED_AFTER_FRAME);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
        app::lua_bind::WorkModule__inc_int_impl(*ppBVar21,iVar4);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::L2CValue
                  ((L2CValue *)appvStack1024,
                   _WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_INT_HOLD_SE_SPEED_AFTER_FRAME);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)appvStack1024);
        iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar21,iVar4);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,iVar4);
        uVar8 = lib::L2CValue::operator_(aLStack928,(L2CValue *)&local_80);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::_L2CValue((L2CValue *)appvStack1024);
        if ((uVar8 & 1) != 0) {
          HVar15 = lib::L2CValue::as_hash(aLStack704);
          iVar4 = app::lua_bind::SoundModule__play_status_se_impl
                            (*ppBVar21,HVar15,false,false,false);
          lib::L2CValue::L2CValue((L2CValue *)&local_80,iVar4);
          lib::L2CValue::L2CValue
                    ((L2CValue *)appvStack1024,
                     _WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_INT_HOLD_SE_HANDLE);
          iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
          iVar6 = lib::L2CValue::as_integer((L2CValue *)appvStack1024);
          app::lua_bind::WorkModule__set_int_impl(*ppBVar21,iVar4,iVar6);
          lib::L2CValue::_L2CValue((L2CValue *)appvStack1024);
          lib::L2CValue::L2CValue((L2CValue *)appvStack1024,0xd487813b4);
          lib::L2CValue::L2CValue(aLStack1072,0);
          lib::L2CValue::L2CValue((L2CValue *)appvStack1088,true);
          HVar15 = lib::L2CValue::as_hash((L2CValue *)appvStack1024);
          iVar4 = lib::L2CValue::as_integer(aLStack1072);
          bVar1 = lib::L2CValue::as_bool((L2CValue *)appvStack1088);
          app::lua_bind::ControlModule__set_rumble_impl
                    (*ppBVar21,HVar15,iVar4,(bool)(bVar1 & 1),0x50000000);
          lib::L2CValue::_L2CValue((L2CValue *)appvStack1088);
          lib::L2CValue::_L2CValue(aLStack1072);
          lib::L2CValue::_L2CValue((L2CValue *)appvStack1024);
          lib::L2CValue::L2CValue
                    ((L2CValue *)appvStack1024,
                     _WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_INT_HOLD_SE_REQUEST_AFTER_FRAME);
          iVar4 = lib::L2CValue::as_integer(aLStack944);
          iVar6 = lib::L2CValue::as_integer((L2CValue *)appvStack1024);
          app::lua_bind::WorkModule__set_int_impl(*ppBVar21,iVar4,iVar6);
          lib::L2CValue::_L2CValue((L2CValue *)appvStack1024);
          lib::L2CValue::L2CValue
                    ((L2CValue *)appvStack1024,
                     _WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_FLAG_HOLD_SE_REQUESTED);
          iVar4 = lib::L2CValue::as_integer((L2CValue *)appvStack1024);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar21,iVar4);
LAB_710002b764:
          lib::L2CValue::_L2CValue((L2CValue *)appvStack1024);
          lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        }
      }
      lib::L2CValue::L2CValue((L2CValue *)&local_80,0);
      lib::L2CValue::L2CValue
                ((L2CValue *)appvStack1024,
                 _WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_INT_HOLD_CHAIN_SE_STICK_COUNT);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
      iVar6 = lib::L2CValue::as_integer((L2CValue *)appvStack1024);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar21,iVar4,iVar6);
      lib::L2CValue::_L2CValue((L2CValue *)appvStack1024);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_80,
                 _WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_FLAG_HOLD_SE_CHAIN_REQUESTED);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar21,iVar4);
LAB_710002b810:
      pppvVar17 = &local_80;
    }
    lib::L2CValue::_L2CValue((L2CValue *)pppvVar17);
    HVar15 = lib::L2CValue::as_hash(aLStack704);
    bVar1 = app::lua_bind::SoundModule__is_playing_status_impl(*ppBVar21,HVar15);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)appvStack1024,_WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_INT_HOLD_SE_HANDLE);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)appvStack1024);
      iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar21,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,iVar4);
      lib::L2CValue::_L2CValue((L2CValue *)appvStack1024);
      lib::L2CValue::operator_(aLStack560,aLStack672);
      lib::L2CValue::operator_((L2CValue *)auStack656,aLStack672);
      lib::L2CValue::operator_(aLStack1072,(L2CValue *)appvStack1088);
      lib::L2CValue::L2CValue(aLStack1200,0.0);
      lib::L2CValue::L2CValue(aLStack1216,1.0);
      lua2cpp::L2CFighterBase::clamp(this,(L2CValue)0x60,(L2CValue)0x50,(L2CValue)0x40);
      lib::L2CValue::_L2CValue(aLStack1216);
      lib::L2CValue::_L2CValue(aLStack1200);
      lib::L2CValue::_L2CValue(aLStack1184);
      lib::L2CValue::_L2CValue((L2CValue *)appvStack1088);
      lib::L2CValue::_L2CValue(aLStack1072);
      lib::L2CValue::operator_((L2CValue *)appvStack592,(L2CValue *)auStack640);
      lib::L2CValue::operator_(aLStack1104,(L2CValue *)appvStack1024);
      lib::L2CValue::operator_((L2CValue *)appvStack1088,(L2CValue *)auStack640);
      HVar15 = lib::L2CValue::as_hash(aLStack704);
      fVar22 = (float)lib::L2CValue::as_number(aLStack1072);
      app::lua_bind::SoundModule__set_se_pitch_ratio_impl(*ppBVar21,HVar15,fVar22);
      lib::L2CValue::_L2CValue(aLStack1072);
      lib::L2CValue::_L2CValue((L2CValue *)appvStack1088);
      lib::L2CValue::_L2CValue(aLStack1104);
      lib::L2CValue::operator_((L2CValue *)&local_90,aLStack576);
      lib::L2CValue::operator_(aLStack1104,(L2CValue *)appvStack1024);
      lib::L2CValue::operator_((L2CValue *)appvStack1088,aLStack576);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
      fVar22 = (float)lib::L2CValue::as_number(aLStack1072);
      app::lua_bind::SoundModule__set_se_vol_impl(*ppBVar21,iVar4,fVar22,0);
      lib::L2CValue::_L2CValue(aLStack1072);
      lib::L2CValue::_L2CValue((L2CValue *)appvStack1088);
      lib::L2CValue::_L2CValue(aLStack1104);
      lib::L2CValue::_L2CValue((L2CValue *)appvStack1024);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    }
    lib::L2CValue::_L2CValue(aLStack992);
    lib::L2CValue::_L2CValue(aLStack976);
    lib::L2CValue::_L2CValue(aLStack960);
    lib::L2CValue::_L2CValue(aLStack944);
    lib::L2CValue::_L2CValue(aLStack928);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_80,false);
  uVar8 = lib::L2CValue::operator__(aLStack416,(L2CValue *)&local_80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  if (((uVar8 & 1) != 0) &&
     (uVar8 = lib::L2CValue::operator_(aLStack688,aLStack560), (uVar8 & 1) != 0)) {
    lib::L2CValue::L2CValue(aLStack944,0x1b);
    iVar4 = lib::L2CValue::as_integer(aLStack944);
    iVar4 = app::lua_bind::PhysicsModule__get_2nd_touch_ground_line_num_impl(*ppBVar21,iVar4);
    lib::L2CValue::L2CValue(aLStack928,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,0);
    uVar8 = lib::L2CValue::operator_((L2CValue *)&local_80,aLStack928);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue(aLStack928);
    lib::L2CValue::_L2CValue(aLStack944);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue
                (aLStack944,_WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_FLAG_HOLD_BOUND_SE_ONCE);
      iVar4 = lib::L2CValue::as_integer(aLStack944);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar21,iVar4);
      lib::L2CValue::L2CValue(aLStack928,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue((L2CValue *)&local_80,false);
      uVar8 = lib::L2CValue::operator__(aLStack928,(L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::_L2CValue(aLStack928);
      lib::L2CValue::_L2CValue(aLStack944);
      if ((uVar8 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack944,_WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_FLAG_HOLD_SE_GROUND);
        iVar4 = lib::L2CValue::as_integer(aLStack944);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar21,iVar4);
        lib::L2CValue::L2CValue(aLStack928,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue((L2CValue *)&local_80,false);
        uVar8 = lib::L2CValue::operator__(aLStack928,(L2CValue *)&local_80);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        lib::L2CValue::_L2CValue(aLStack928);
        lib::L2CValue::_L2CValue(aLStack944);
        if ((uVar8 & 1) == 0) goto LAB_710002bf8c;
        HVar15 = lib::L2CValue::as_hash(aLStack896);
        iVar4 = app::lua_bind::SoundModule__play_status_se_impl(*ppBVar21,HVar15,false,false,false);
        lib::L2CValue::L2CValue((L2CValue *)appvStack1248,iVar4);
        pppvVar17 = appvStack1248;
      }
      else {
        HVar15 = lib::L2CValue::as_hash(aLStack880);
        iVar4 = app::lua_bind::SoundModule__play_status_se_impl(*ppBVar21,HVar15,false,false,false);
        lib::L2CValue::L2CValue(aLStack1232,iVar4);
        lib::L2CValue::_L2CValue(aLStack1232);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_80,_WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_FLAG_HOLD_BOUND_SE_ONCE
                  );
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar21,iVar4);
        pppvVar17 = &local_80;
      }
      lib::L2CValue::_L2CValue((L2CValue *)pppvVar17);
    }
  }
LAB_710002bf8c:
  lib::L2CValue::_L2CValue(aLStack912);
  lib::L2CValue::_L2CValue(aLStack896);
  lib::L2CValue::_L2CValue(aLStack880);
  lib::L2CValue::_L2CValue(aLStack704);
  lib::L2CValue::_L2CValue(aLStack688);
  lib::L2CValue::_L2CValue(aLStack672);
  lib::L2CValue::_L2CValue((L2CValue *)auStack656);
  lib::L2CValue::_L2CValue((L2CValue *)auStack640);
  lib::L2CValue::_L2CValue((L2CValue *)appvStack592);
  lib::L2CValue::_L2CValue(aLStack576);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue(aLStack560);
  lib::L2CValue::_L2CValue(aLStack528);
  lib::L2CValue::_L2CValue(aLStack480);
  lib::L2CValue::L2CValue(aLStack480,0x1b);
  iVar4 = lib::L2CValue::as_integer(aLStack480);
  iVar4 = app::lua_bind::PhysicsModule__get_2nd_touch_ground_line_num_impl(*ppBVar21,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,0);
  uVar8 = lib::L2CValue::operator_((L2CValue *)&local_80,(L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue(aLStack480);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_80,_WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_FLAG_HOLD_SE_GROUND);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar21,iVar4);
  }
  else {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_80,_WEAPON_SIMON_WHIP_INSTANCE_WORK_ID_FLAG_HOLD_SE_GROUND);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_80);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar21,iVar4);
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  pLVar11 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
  pWVar14 = (Weapon *)lib::L2CValue::as_pointer(pLVar11);
  app::WeaponSpecializer_SimonWhip::sleep_attack_by_speed(pWVar14);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack416);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack160);
  return;
}

