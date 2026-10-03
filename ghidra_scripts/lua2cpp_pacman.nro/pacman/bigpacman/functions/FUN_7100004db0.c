
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100004db0(L2CWeaponPacmanBigpacman *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  GroundCorrectKind GVar5;
  ulong uVar6;
  Hash40 HVar7;
  L2CValue *pLVar8;
  L2CValue *pLVar9;
  L2CValue *this_00;
  ulong uVar10;
  BattleObjectModuleAccessor *pBVar11;
  Hash40 HVar12;
  BattleObjectModuleAccessor **ppBVar13;
  BattleObjectModuleAccessor **ppBVar14;
  float fVar15;
  uint uVar16;
  float fVar17;
  long lVar18;
  undefined8 uVar19;
  int in_stack_fffffffffffffdc4;
  undefined in_stack_fffffffffffffdcc;
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  undefined local_180 [32];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  undefined auStack288 [16];
  undefined auStack272 [16];
  undefined auStack256 [16];
  undefined auStack240 [32];
  undefined auStack208 [16];
  undefined auStack192 [16];
  undefined auStack176 [16];
  undefined auStack160 [32];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  BattleObjectModuleAccessor *local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue(aLStack112,false);
  ppBVar14 = &this->moduleAccessor;
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar14);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)(auStack160 + 0x10),0.0);
  fVar15 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar14);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar15);
  lib::L2CValue::L2CValue((L2CValue *)local_180,-1.0);
  uVar6 = lib::L2CValue::operator==((L2CValue *)&local_60,(L2CValue *)local_180);
  lib::L2CValue::~L2CValue((L2CValue *)local_180);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)local_180,180.0);
    lib::L2CValue::operator=((L2CValue *)(auStack160 + 0x10),(L2CValue *)local_180);
    lib::L2CValue::~L2CValue((L2CValue *)local_180);
  }
  lib::L2CValue::L2CValue((L2CValue *)auStack160,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack160);
  fVar15 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(*ppBVar14,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar15);
  lib::L2CValue::L2CValue((L2CValue *)local_180,0.0);
  uVar6 = lib::L2CValue::operator==((L2CValue *)&local_60,(L2CValue *)local_180);
  lib::L2CValue::~L2CValue((L2CValue *)local_180);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)auStack160);
LAB_7100004f58:
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0x24799f9551);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::operator=(aLStack112,(L2CValue *)local_180);
    lib::L2CValue::~L2CValue((L2CValue *)local_180);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_60,_WEAPON_PACMAN_BIGPACMAN_INSTANCE_WORK_ID_FLAG_FINISH_SPEED);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar14,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)local_180,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)local_180);
    lib::L2CValue::~L2CValue((L2CValue *)local_180);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)local_180,
                 _WEAPON_PACMAN_BIGPACMAN_INSTANCE_WORK_ID_INT_FINISH_EFFECT_HANDLE);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)local_180);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar14,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)auStack160,iVar3);
      lib::L2CValue::~L2CValue((L2CValue *)local_180);
      uVar16 = lib::L2CValue::as_integer((L2CValue *)auStack160);
      bVar1 = app::lua_bind::EffectModule__is_exist_effect_impl(*ppBVar14,uVar16);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue((L2CValue *)local_180,false);
      uVar6 = lib::L2CValue::operator==((L2CValue *)&local_60,(L2CValue *)local_180);
      lib::L2CValue::~L2CValue((L2CValue *)local_180);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)auStack192,0x115ca63753);
        lib::L2CValue::L2CValue((L2CValue *)auStack208,0x31ed91fca);
        lib::L2CValue::L2CValue((L2CValue *)(auStack240 + 0x10),0.0);
        lib::L2CValue::L2CValue((L2CValue *)auStack240,0.0);
        lib::L2CValue::L2CValue((L2CValue *)auStack256,0.0);
        lib::L2CValue::L2CValue((L2CValue *)auStack272,0.0);
        lib::L2CValue::L2CValue((L2CValue *)auStack288,0.0);
        HVar12 = lib::L2CValue::as_hash((L2CValue *)auStack192);
        HVar7 = lib::L2CValue::as_hash((L2CValue *)auStack208);
        uVar6 = lib::L2CValue::as_number((L2CValue *)(auStack240 + 0x10));
        lVar18 = lib::L2CValue::as_number((L2CValue *)auStack240);
        uVar16 = lib::L2CValue::as_number((L2CValue *)auStack256);
        local_180._0_8_ = (void **)(uVar6 & 0xffffffff | lVar18 << 0x20);
        local_180._8_8_ = (lua_State *)(ulong)uVar16;
        uVar6 = lib::L2CValue::as_number((L2CValue *)(auStack160 + 0x10));
        lVar18 = lib::L2CValue::as_number((L2CValue *)auStack272);
        uVar16 = lib::L2CValue::as_number((L2CValue *)auStack288);
        local_60 = (BattleObjectModuleAccessor *)(uVar6 & 0xffffffff | lVar18 << 0x20);
        uStack88 = (ulong)uVar16;
        uVar16 = app::lua_bind::EffectModule__req_follow_impl
                           (*ppBVar14,HVar12,HVar7,(Vector3f *)local_180,(Vector3f *)&local_60,1.0,
                            false,0,0,-1,in_stack_fffffffffffffdc4,0,(bool)in_stack_fffffffffffffdcc
                            ,false);
        lib::L2CValue::L2CValue((L2CValue *)auStack176,uVar16);
        lib::L2CValue::operator=((L2CValue *)auStack160,(L2CValue *)auStack176);
        lib::L2CValue::~L2CValue((L2CValue *)auStack176);
        lib::L2CValue::~L2CValue((L2CValue *)auStack288);
        lib::L2CValue::~L2CValue((L2CValue *)auStack272);
        lib::L2CValue::~L2CValue((L2CValue *)auStack256);
        lib::L2CValue::~L2CValue((L2CValue *)auStack240);
        lib::L2CValue::~L2CValue((L2CValue *)(auStack240 + 0x10));
        lib::L2CValue::~L2CValue((L2CValue *)auStack208);
        lib::L2CValue::~L2CValue((L2CValue *)auStack192);
        lib::L2CValue::L2CValue
                  ((L2CValue *)local_180,
                   _WEAPON_PACMAN_BIGPACMAN_INSTANCE_WORK_ID_INT_FINISH_EFFECT_HANDLE);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack160);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)local_180);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar14,iVar3,iVar4);
        lib::L2CValue::~L2CValue((L2CValue *)local_180);
      }
      lib::L2CValue::~L2CValue((L2CValue *)auStack160);
    }
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)auStack192,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack192);
    fVar15 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(*ppBVar14,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)auStack176,fVar15);
    lib::L2CValue::L2CValue((L2CValue *)local_180,0.0);
    uVar6 = lib::L2CValue::operator==((L2CValue *)auStack176,(L2CValue *)local_180);
    lib::L2CValue::~L2CValue((L2CValue *)local_180);
    lib::L2CValue::~L2CValue((L2CValue *)auStack176);
    lib::L2CValue::~L2CValue((L2CValue *)auStack192);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)auStack160);
    if ((uVar6 & 1) == 0) goto LAB_7100004f58;
  }
  lib::L2CValue::operator!(aLStack128);
  bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)local_180);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::~L2CValue((L2CValue *)local_180);
  }
  else {
    pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,8);
    bVar2 = lib::L2CValue::operator.cast.to.bool(pLVar8);
    lib::L2CValue::~L2CValue((L2CValue *)local_180);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_7100006ba0;
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)local_180,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)local_180);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar14,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)local_180);
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack112);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)local_180,0);
    uVar6 = lib::L2CValue::operator<=((L2CValue *)&local_60,(L2CValue *)local_180);
    lib::L2CValue::~L2CValue((L2CValue *)local_180);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack176,_WEAPON_PACMAN_BIGPACMAN_INSTANCE_WORK_ID_FLAG_EAT);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack176);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar14,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)auStack160,(bool)(bVar1 & 1));
      lib::L2CValue::operator!((L2CValue *)auStack160);
      bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)local_180);
      lib::L2CValue::~L2CValue((L2CValue *)local_180);
      lib::L2CValue::~L2CValue((L2CValue *)auStack160);
      lib::L2CValue::~L2CValue((L2CValue *)auStack176);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue
                  ((L2CValue *)local_180,
                   _WEAPON_PACMAN_BIGPACMAN_INSTANCE_WORK_ID_FLOAT_FINISH_POS_X);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)local_180);
        fVar15 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar14,iVar3);
        lib::L2CValue::L2CValue(aLStack304,fVar15);
        lib::L2CValue::L2CValue
                  ((L2CValue *)auStack176,
                   _WEAPON_PACMAN_BIGPACMAN_INSTANCE_WORK_ID_FLOAT_FINISH_POS_Y);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack176);
        fVar15 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar14,iVar3);
        lib::L2CValue::L2CValue(aLStack320,fVar15);
        fVar15 = (float)app::lua_bind::PostureModule__pos_z_impl(*ppBVar14);
        lib::L2CValue::L2CValue(aLStack336,fVar15);
        lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0xd0,(L2CValue)0xc0,(L2CValue)0xb0);
        lib::L2CValue::~L2CValue(aLStack336);
        lib::L2CValue::~L2CValue(aLStack320);
        lib::L2CValue::~L2CValue((L2CValue *)auStack176);
        lib::L2CValue::~L2CValue(aLStack304);
        lib::L2CValue::~L2CValue((L2CValue *)local_180);
        pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)auStack160,0x18cdc1683);
        pLVar9 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)auStack160,0x1fbdb2615);
        this_00 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)auStack160,0x162d277af);
        uVar6 = lib::L2CValue::as_number(pLVar8);
        lVar18 = lib::L2CValue::as_number(pLVar9);
        uVar16 = lib::L2CValue::as_number(this_00);
        local_180._0_8_ = (void **)(uVar6 & 0xffffffff | lVar18 << 0x20);
        local_180._8_8_ = (lua_State *)(ulong)uVar16;
        app::lua_bind::PostureModule__set_pos_impl(*ppBVar14,(Vector3f *)local_180);
        lib::L2CValue::L2CValue((L2CValue *)local_180,0x199c462b5d);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)local_180);
        app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
        lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
        lib::L2CValue::~L2CValue(aLStack352);
        lib::L2CValue::~L2CValue((L2CValue *)local_180);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        lib::L2CValue::~L2CValue((L2CValue *)auStack160);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        goto LAB_7100006ba0;
      }
    }
  }
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue
            ((L2CValue *)local_180,_WEAPON_PACMAN_BIGPACMAN_INSTANCE_WORK_ID_FLOAT_PATH_DEGREE);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)local_180);
  fVar15 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar14,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar15);
  lib::L2CValue::~L2CValue((L2CValue *)local_180);
  lib::L2CValue::L2CValue
            ((L2CValue *)local_180,_WEAPON_PACMAN_BIGPACMAN_INSTANCE_WORK_ID_FLOAT_MOVE_DEGREE);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)local_180);
  fVar15 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar14,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)auStack160,fVar15);
  lib::L2CValue::~L2CValue((L2CValue *)local_180);
  lib::L2CValue::L2CValue((L2CValue *)local_180,0xf997d7d84);
  lib::L2CValue::L2CValue((L2CValue *)auStack192,0x112731b686);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)local_180);
  uVar10 = lib::L2CValue::as_integer((L2CValue *)auStack192);
  fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar14,uVar6,uVar10);
  lib::L2CValue::L2CValue((L2CValue *)auStack176,fVar15);
  lib::L2CValue::~L2CValue((L2CValue *)auStack192);
  lib::L2CValue::~L2CValue((L2CValue *)local_180);
  pLVar8 = (L2CValue *)auStack160;
  lib::L2CValue::operator-((L2CValue *)&local_60,pLVar8);
  lib::L2CAgent::math_abs((L2CAgent *)auStack192,pLVar8);
  pLVar8 = (L2CValue *)auStack176;
  uVar6 = lib::L2CValue::operator<((L2CValue *)local_180,pLVar8);
  lib::L2CValue::~L2CValue((L2CValue *)local_180);
  lib::L2CValue::~L2CValue((L2CValue *)auStack192);
  if ((uVar6 & 1) != 0) {
    fVar15 = (float)app::lua_bind::ControlModule__get_stick_x_impl(*ppBVar14);
    lib::L2CValue::L2CValue((L2CValue *)auStack192,fVar15);
    fVar15 = (float)app::lua_bind::ControlModule__get_stick_y_impl(*ppBVar14);
    lib::L2CValue::L2CValue((L2CValue *)auStack208,fVar15);
    lib::L2CAgent::math_abs((L2CAgent *)auStack192,pLVar8);
    lib::L2CValue::L2CValue((L2CValue *)local_180,0.0);
    pLVar8 = (L2CValue *)(auStack240 + 0x10);
    uVar6 = lib::L2CValue::operator<((L2CValue *)local_180,pLVar8);
    lib::L2CValue::~L2CValue((L2CValue *)local_180);
    if ((uVar6 & 1) == 0) {
      lib::L2CAgent::math_abs((L2CAgent *)auStack208,pLVar8);
      lib::L2CValue::L2CValue((L2CValue *)local_180,0.0);
      pLVar8 = (L2CValue *)auStack240;
      uVar6 = lib::L2CValue::operator<((L2CValue *)local_180,pLVar8);
      lib::L2CValue::~L2CValue((L2CValue *)local_180);
      lib::L2CValue::~L2CValue((L2CValue *)auStack240);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack240 + 0x10));
      if ((uVar6 & 1) != 0) goto LAB_71000056d8;
    }
    else {
      lib::L2CValue::~L2CValue((L2CValue *)(auStack240 + 0x10));
LAB_71000056d8:
      fVar15 = (float)app::lua_bind::ControlModule__get_stick_angle_impl(*ppBVar14);
      lib::L2CValue::L2CValue((L2CValue *)local_180,fVar15);
      lib::L2CAgent::math_deg((L2CAgent *)local_180,pLVar8);
      lib::L2CValue::~L2CValue((L2CValue *)local_180);
      lib::L2CValue::L2CValue((L2CValue *)local_180,0.0);
      uVar6 = lib::L2CValue::operator<((L2CValue *)(auStack240 + 0x10),(L2CValue *)local_180);
      lib::L2CValue::~L2CValue((L2CValue *)local_180);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)local_180,360.0);
        lib::L2CValue::operator+((L2CValue *)(auStack240 + 0x10),(L2CValue *)local_180);
        lib::L2CValue::~L2CValue((L2CValue *)local_180);
        lib::L2CValue::operator=((L2CValue *)(auStack240 + 0x10),(L2CValue *)auStack240);
        lib::L2CValue::~L2CValue((L2CValue *)auStack240);
      }
      lib::L2CValue::L2CValue((L2CValue *)local_180,0xf997d7d84);
      lib::L2CValue::L2CValue((L2CValue *)auStack256,0xdaf9280f3);
      uVar6 = lib::L2CValue::as_integer((L2CValue *)local_180);
      uVar10 = lib::L2CValue::as_integer((L2CValue *)auStack256);
      fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar14,uVar6,uVar10);
      lib::L2CValue::L2CValue((L2CValue *)auStack240,fVar15);
      lib::L2CValue::~L2CValue((L2CValue *)auStack256);
      lib::L2CValue::~L2CValue((L2CValue *)local_180);
      ppBVar13 = &local_60;
      lib::L2CValue::operator-((L2CValue *)(auStack240 + 0x10),(L2CValue *)ppBVar13);
      lib::L2CAgent::math_abs((L2CAgent *)auStack272,(L2CValue *)ppBVar13);
      lib::L2CValue::L2CValue((L2CValue *)local_180,180.0);
      uVar6 = lib::L2CValue::operator<=((L2CValue *)auStack256,(L2CValue *)local_180);
      lib::L2CValue::~L2CValue((L2CValue *)local_180);
      lib::L2CValue::~L2CValue((L2CValue *)auStack256);
      lib::L2CValue::~L2CValue((L2CValue *)auStack272);
      if ((uVar6 & 1) == 0) {
        uVar6 = lib::L2CValue::operator<((L2CValue *)&local_60,(L2CValue *)(auStack240 + 0x10));
        if ((uVar6 & 1) == 0) {
          uVar6 = lib::L2CValue::operator<((L2CValue *)(auStack240 + 0x10),(L2CValue *)&local_60);
          if ((uVar6 & 1) == 0) goto LAB_71000058e0;
          lib::L2CValue::operator+((L2CValue *)&local_60,(L2CValue *)auStack240);
          lib::L2CValue::operator=((L2CValue *)&local_60,(L2CValue *)local_180);
        }
        else {
          lib::L2CValue::operator-((L2CValue *)&local_60,(L2CValue *)auStack240);
          lib::L2CValue::operator=((L2CValue *)&local_60,(L2CValue *)local_180);
        }
LAB_71000058d8:
        lib::L2CValue::~L2CValue((L2CValue *)local_180);
      }
      else {
        uVar6 = lib::L2CValue::operator<((L2CValue *)&local_60,(L2CValue *)(auStack240 + 0x10));
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::operator+((L2CValue *)&local_60,(L2CValue *)auStack240);
          lib::L2CValue::operator=((L2CValue *)&local_60,(L2CValue *)local_180);
          goto LAB_71000058d8;
        }
        uVar6 = lib::L2CValue::operator<((L2CValue *)(auStack240 + 0x10),(L2CValue *)&local_60);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::operator-((L2CValue *)&local_60,(L2CValue *)auStack240);
          lib::L2CValue::operator=((L2CValue *)&local_60,(L2CValue *)local_180);
          goto LAB_71000058d8;
        }
      }
LAB_71000058e0:
      pLVar8 = (L2CValue *)auStack160;
      lib::L2CValue::operator-((L2CValue *)&local_60,pLVar8);
      lib::L2CAgent::math_abs((L2CAgent *)auStack256,pLVar8);
      uVar6 = lib::L2CValue::operator<((L2CValue *)auStack176,(L2CValue *)local_180);
      lib::L2CValue::~L2CValue((L2CValue *)local_180);
      lib::L2CValue::~L2CValue((L2CValue *)auStack256);
      if ((uVar6 & 1) != 0) {
        uVar6 = lib::L2CValue::operator<((L2CValue *)auStack160,(L2CValue *)&local_60);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::operator-((L2CValue *)auStack160,(L2CValue *)auStack176);
          lib::L2CValue::operator=((L2CValue *)&local_60,(L2CValue *)local_180);
        }
        else {
          lib::L2CValue::operator+((L2CValue *)auStack160,(L2CValue *)auStack176);
          lib::L2CValue::operator=((L2CValue *)&local_60,(L2CValue *)local_180);
        }
        lib::L2CValue::~L2CValue((L2CValue *)local_180);
      }
      lib::L2CValue::L2CValue((L2CValue *)local_180,360.0);
      uVar6 = lib::L2CValue::operator<((L2CValue *)local_180,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)local_180);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)local_180,0.0);
        uVar6 = lib::L2CValue::operator<((L2CValue *)&local_60,(L2CValue *)local_180);
        lib::L2CValue::~L2CValue((L2CValue *)local_180);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)local_180,360.0);
          lib::L2CValue::operator+((L2CValue *)&local_60,(L2CValue *)local_180);
          lib::L2CValue::~L2CValue((L2CValue *)local_180);
          lib::L2CValue::operator=((L2CValue *)&local_60,(L2CValue *)auStack256);
          goto LAB_7100005a30;
        }
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)local_180,360.0);
        lib::L2CValue::operator-((L2CValue *)&local_60,(L2CValue *)local_180);
        lib::L2CValue::~L2CValue((L2CValue *)local_180);
        lib::L2CValue::operator=((L2CValue *)&local_60,(L2CValue *)auStack256);
LAB_7100005a30:
        lib::L2CValue::~L2CValue((L2CValue *)auStack256);
      }
      lib::L2CValue::L2CValue((L2CValue *)local_180,0.0);
      lib::L2CValue::operator+((L2CValue *)&local_60,(L2CValue *)local_180);
      lib::L2CValue::~L2CValue((L2CValue *)local_180);
      lib::L2CValue::L2CValue
                ((L2CValue *)local_180,_WEAPON_PACMAN_BIGPACMAN_INSTANCE_WORK_ID_FLOAT_PATH_DEGREE);
      fVar15 = (float)lib::L2CValue::as_number((L2CValue *)auStack256);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)local_180);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar14,fVar15,iVar3);
      lib::L2CValue::~L2CValue((L2CValue *)local_180);
      lib::L2CValue::~L2CValue((L2CValue *)auStack256);
      lib::L2CValue::~L2CValue((L2CValue *)auStack240);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack240 + 0x10));
    }
    lib::L2CValue::~L2CValue((L2CValue *)auStack208);
    lib::L2CValue::~L2CValue((L2CValue *)auStack192);
  }
  lib::L2CValue::~L2CValue((L2CValue *)auStack176);
  lib::L2CValue::~L2CValue((L2CValue *)auStack160);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack112);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)local_180,_WEAPON_PACMAN_BIGPACMAN_INSTANCE_WORK_ID_FLOAT_MOVE_DEGREE);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)local_180);
    fVar15 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar14,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar15);
    lib::L2CValue::~L2CValue((L2CValue *)local_180);
    pLVar9 = (L2CValue *)0x5;
    pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,5);
    pBVar11 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar8);
    fVar15 = (float)app::SlopeModuleSimple::gravity_angle(pBVar11);
    lib::L2CValue::L2CValue((L2CValue *)local_180,fVar15);
    lib::L2CAgent::math_deg((L2CAgent *)local_180,pLVar9);
    lib::L2CValue::~L2CValue((L2CValue *)local_180);
    lib::L2CValue::operator-((L2CValue *)&local_60,(L2CValue *)auStack160);
    lib::L2CValue::L2CValue((L2CValue *)auStack192,0.0);
    lib::L2CValue::L2CValue((L2CValue *)auStack208,0.0);
    uVar6 = lib::L2CValue::as_number((L2CValue *)auStack192);
    lVar18 = lib::L2CValue::as_number((L2CValue *)auStack208);
    uVar16 = lib::L2CValue::as_number((L2CValue *)auStack176);
    local_180._0_8_ = (void **)(uVar6 & 0xffffffff | lVar18 << 0x20);
    local_180._8_8_ = (lua_State *)(ulong)uVar16;
    app::lua_bind::PostureModule__set_rot_impl(*ppBVar14,(Vector3f *)local_180,0);
  }
  else {
    lib::L2CValue::L2CValue
              ((L2CValue *)local_180,
               _WEAPON_PACMAN_BIGPACMAN_INSTANCE_WORK_ID_INT_FINISH_EFFECT_HANDLE);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)local_180);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar14,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)local_180);
    uVar16 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    bVar1 = app::lua_bind::EffectModule__is_exist_effect_impl(*ppBVar14,uVar16);
    lib::L2CValue::L2CValue((L2CValue *)auStack160,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)local_180,true);
    uVar6 = lib::L2CValue::operator==((L2CValue *)auStack160,(L2CValue *)local_180);
    lib::L2CValue::~L2CValue((L2CValue *)local_180);
    lib::L2CValue::~L2CValue((L2CValue *)auStack160);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)local_180,5);
      uVar16 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)local_180);
      app::lua_bind::EffectModule__detach_impl(*ppBVar14,uVar16,iVar3);
      lib::L2CValue::~L2CValue((L2CValue *)local_180);
      lib::L2CValue::L2CValue((L2CValue *)local_180,0);
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack160,
                 _WEAPON_PACMAN_BIGPACMAN_INSTANCE_WORK_ID_INT_FINISH_EFFECT_HANDLE);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)local_180);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack160);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar14,iVar3,iVar4);
      lib::L2CValue::~L2CValue((L2CValue *)auStack160);
      lib::L2CValue::~L2CValue((L2CValue *)local_180);
    }
    lib::L2CValue::L2CValue
              ((L2CValue *)local_180,_WEAPON_PACMAN_BIGPACMAN_INSTANCE_WORK_ID_FLOAT_PATH_DEGREE);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)local_180);
    fVar15 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar14,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)auStack160,fVar15);
    lib::L2CValue::~L2CValue((L2CValue *)local_180);
    lib::L2CValue::L2CValue((L2CValue *)local_180,0.0);
    lib::L2CValue::operator+((L2CValue *)auStack160,(L2CValue *)local_180);
    lib::L2CValue::~L2CValue((L2CValue *)local_180);
    lib::L2CValue::L2CValue
              ((L2CValue *)local_180,_WEAPON_PACMAN_BIGPACMAN_INSTANCE_WORK_ID_FLOAT_MOVE_DEGREE);
    fVar15 = (float)lib::L2CValue::as_number((L2CValue *)auStack176);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)local_180);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar14,fVar15,iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)local_180);
    lib::L2CValue::~L2CValue((L2CValue *)auStack176);
    lib::L2CValue::L2CValue((L2CValue *)auStack176);
    lib::L2CValue::L2CValue((L2CValue *)auStack192);
    lib::L2CValue::L2CValue((L2CValue *)auStack208,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack208);
    uVar19 = app::sv_kinetic_energy::get_speed(this->luaStateAgent);
    lib::L2CValue::L2CValue((L2CValue *)local_180,(float)uVar19);
    pLVar8 = (L2CValue *)(local_180 + 0x10);
    lib::L2CValue::L2CValue(pLVar8,(float)((ulong)uVar19 >> 0x20));
    lib::L2CValue::operator=((L2CValue *)auStack176,(L2CValue *)local_180);
    pLVar9 = pLVar8;
    lib::L2CValue::operator=((L2CValue *)auStack192,pLVar8);
    lib::L2CValue::~L2CValue(pLVar8);
    lib::L2CValue::~L2CValue((L2CValue *)local_180);
    lib::L2CValue::~L2CValue((L2CValue *)auStack208);
    fVar15 = (float)lib::L2CValue::as_number((L2CValue *)auStack176);
    fVar17 = (float)lib::L2CValue::as_number((L2CValue *)auStack192);
    fVar15 = (float)app::sv_math::vec2_length(fVar15,fVar17);
    lib::L2CValue::L2CValue((L2CValue *)auStack208,fVar15);
    lib::L2CAgent::math_rad((L2CAgent *)auStack160,pLVar9);
    lib::L2CAgent::math_cos((L2CAgent *)auStack240,pLVar9);
    lib::L2CValue::operator*((L2CValue *)auStack208,(L2CValue *)(auStack240 + 0x10));
    pLVar8 = (L2CValue *)local_180;
    lib::L2CValue::operator=((L2CValue *)auStack176,pLVar8);
    lib::L2CValue::~L2CValue((L2CValue *)local_180);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack240 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)auStack240);
    lib::L2CAgent::math_rad((L2CAgent *)auStack160,pLVar8);
    lib::L2CAgent::math_sin((L2CAgent *)auStack240,pLVar8);
    lib::L2CValue::operator*((L2CValue *)auStack208,(L2CValue *)(auStack240 + 0x10));
    lib::L2CValue::operator=((L2CValue *)auStack192,(L2CValue *)local_180);
    lib::L2CValue::~L2CValue((L2CValue *)local_180);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack240 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)auStack240);
    lib::L2CValue::L2CValue((L2CValue *)local_180,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)local_180);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack176);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack192);
    app::sv_kinetic_energy::set_speed(this->luaStateAgent);
    lib::L2CValue::~L2CValue((L2CValue *)local_180);
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack240,_WEAPON_PACMAN_BIGPACMAN_INSTANCE_WORK_ID_FLAG_FINISH_SPEED);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack240);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar14,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)(auStack240 + 0x10),(bool)(bVar1 & 1));
    lib::L2CValue::operator!((L2CValue *)(auStack240 + 0x10));
    bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)local_180);
    lib::L2CValue::~L2CValue((L2CValue *)local_180);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack240 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)auStack240);
    if ((bVar2 & 1U) == 0) {
      pLVar8 = (L2CValue *)(ulong)_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL;
      lib::L2CValue::L2CValue((L2CValue *)local_180,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
      lib::L2CAgent::math_abs((L2CAgent *)auStack176,pLVar8);
      lib::L2CAgent::math_abs((L2CAgent *)auStack192,pLVar8);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)local_180);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)(auStack240 + 0x10));
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack240);
      app::sv_kinetic_energy::set_limit_speed(this->luaStateAgent);
      lib::L2CValue::~L2CValue((L2CValue *)auStack240);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack240 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)local_180);
      pLVar8 = (L2CValue *)(ulong)_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL;
      lib::L2CValue::L2CValue((L2CValue *)local_180,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
      lib::L2CAgent::math_abs((L2CAgent *)auStack176,pLVar8);
      lib::L2CAgent::math_abs((L2CAgent *)auStack192,pLVar8);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)local_180);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)(auStack240 + 0x10));
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack240);
      app::sv_kinetic_energy::set_stable_speed(this->luaStateAgent);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)(auStack240 + 0x10),0xf997d7d84);
      lib::L2CValue::L2CValue((L2CValue *)auStack240,0x9bc3ffffd);
      pLVar8 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)(auStack240 + 0x10));
      uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack240);
      fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar14,(ulong)pLVar8,uVar6)
      ;
      lib::L2CValue::L2CValue((L2CValue *)local_180,fVar15);
      lib::L2CValue::~L2CValue((L2CValue *)auStack240);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack240 + 0x10));
      lib::L2CAgent::math_rad((L2CAgent *)auStack160,pLVar8);
      lib::L2CAgent::math_cos((L2CAgent *)auStack272,pLVar8);
      pLVar8 = (L2CValue *)auStack256;
      lib::L2CValue::operator*((L2CValue *)local_180,pLVar8);
      lib::L2CAgent::math_abs((L2CAgent *)auStack240,pLVar8);
      lib::L2CValue::~L2CValue((L2CValue *)auStack240);
      lib::L2CValue::~L2CValue((L2CValue *)auStack256);
      lib::L2CValue::~L2CValue((L2CValue *)auStack272);
      lib::L2CAgent::math_rad((L2CAgent *)auStack160,pLVar8);
      lib::L2CAgent::math_sin((L2CAgent *)auStack288,pLVar8);
      pLVar8 = (L2CValue *)auStack272;
      lib::L2CValue::operator*((L2CValue *)local_180,pLVar8);
      lib::L2CAgent::math_abs((L2CAgent *)auStack256,pLVar8);
      lib::L2CValue::~L2CValue((L2CValue *)auStack256);
      lib::L2CValue::~L2CValue((L2CValue *)auStack272);
      lib::L2CValue::~L2CValue((L2CValue *)auStack288);
      lib::L2CValue::L2CValue((L2CValue *)auStack256,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack256);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)(auStack240 + 0x10));
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack240);
      app::sv_kinetic_energy::set_limit_speed(this->luaStateAgent);
      lib::L2CValue::~L2CValue((L2CValue *)auStack256);
      lib::L2CValue::L2CValue((L2CValue *)auStack256,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack256);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)(auStack240 + 0x10));
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack240);
      app::sv_kinetic_energy::set_stable_speed(this->luaStateAgent);
      lib::L2CValue::~L2CValue((L2CValue *)auStack256);
    }
    lib::L2CValue::~L2CValue((L2CValue *)auStack240);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack240 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)local_180);
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack240,_WEAPON_PACMAN_BIGPACMAN_INSTANCE_WORK_ID_FLAG_FINISH_SPEED);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack240);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar14,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)(auStack240 + 0x10),(bool)(bVar1 & 1));
    lib::L2CValue::operator!((L2CValue *)(auStack240 + 0x10));
    bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)local_180);
    lib::L2CValue::~L2CValue((L2CValue *)local_180);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack240 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)auStack240);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)(auStack240 + 0x10),
                 _WEAPON_PACMAN_BIGPACMAN_INSTANCE_WORK_ID_FLOAT_ACCEL);
      pLVar8 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)(auStack240 + 0x10));
      fVar15 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar14,(int)pLVar8);
      lib::L2CValue::L2CValue((L2CValue *)local_180,fVar15);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack240 + 0x10));
      lib::L2CAgent::math_rad((L2CAgent *)auStack160,pLVar8);
      lib::L2CAgent::math_cos((L2CAgent *)auStack256,pLVar8);
      pLVar8 = (L2CValue *)auStack240;
      lib::L2CValue::operator*((L2CValue *)local_180,pLVar8);
      lib::L2CValue::~L2CValue((L2CValue *)auStack240);
      lib::L2CValue::~L2CValue((L2CValue *)auStack256);
      lib::L2CAgent::math_rad((L2CAgent *)auStack160,pLVar8);
      lib::L2CAgent::math_sin((L2CAgent *)auStack272,pLVar8);
      lib::L2CValue::operator*((L2CValue *)local_180,(L2CValue *)auStack256);
      lib::L2CValue::~L2CValue((L2CValue *)auStack256);
      lib::L2CValue::~L2CValue((L2CValue *)auStack272);
      lib::L2CValue::L2CValue((L2CValue *)auStack256,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack256);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)(auStack240 + 0x10));
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack240);
      app::sv_kinetic_energy::set_accel(this->luaStateAgent);
      lib::L2CValue::~L2CValue((L2CValue *)auStack256);
      lib::L2CValue::~L2CValue((L2CValue *)auStack240);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack240 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)local_180);
    }
    pLVar9 = (L2CValue *)0x5;
    pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,5);
    pBVar11 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar8);
    fVar15 = (float)app::SlopeModuleSimple::gravity_angle(pBVar11);
    lib::L2CValue::L2CValue((L2CValue *)local_180,fVar15);
    lib::L2CAgent::math_deg((L2CAgent *)local_180,pLVar9);
    lib::L2CValue::~L2CValue((L2CValue *)local_180);
    lib::L2CValue::operator-((L2CValue *)auStack160,(L2CValue *)(auStack240 + 0x10));
    lib::L2CValue::L2CValue((L2CValue *)auStack256,0.0);
    lib::L2CValue::L2CValue((L2CValue *)auStack272,0.0);
    uVar6 = lib::L2CValue::as_number((L2CValue *)auStack256);
    lVar18 = lib::L2CValue::as_number((L2CValue *)auStack272);
    uVar16 = lib::L2CValue::as_number((L2CValue *)auStack240);
    local_180._0_8_ = (void **)(uVar6 & 0xffffffff | lVar18 << 0x20);
    local_180._8_8_ = (lua_State *)(ulong)uVar16;
    app::lua_bind::PostureModule__set_rot_impl(*ppBVar14,(Vector3f *)local_180,0);
    lib::L2CValue::~L2CValue((L2CValue *)auStack272);
    lib::L2CValue::~L2CValue((L2CValue *)auStack256);
    lib::L2CValue::L2CValue((L2CValue *)auStack256,1.0);
    lib::L2CValue::L2CValue((L2CValue *)local_180,0.0);
    uVar6 = lib::L2CValue::operator<((L2CValue *)local_180,(L2CValue *)auStack176);
    lib::L2CValue::~L2CValue((L2CValue *)local_180);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)local_180,0.0);
      uVar6 = lib::L2CValue::operator<((L2CValue *)auStack176,(L2CValue *)local_180);
      lib::L2CValue::~L2CValue((L2CValue *)local_180);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)local_180,-1.0);
        lib::L2CValue::operator=((L2CValue *)auStack256,(L2CValue *)local_180);
        goto LAB_710000648c;
      }
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)local_180,1.0);
      lib::L2CValue::operator=((L2CValue *)auStack256,(L2CValue *)local_180);
LAB_710000648c:
      lib::L2CValue::~L2CValue((L2CValue *)local_180);
    }
    fVar15 = (float)lib::L2CValue::as_number((L2CValue *)auStack256);
    app::lua_bind::PostureModule__set_lr_impl(*ppBVar14,fVar15);
    app::lua_bind::PostureModule__update_rot_y_lr_impl(*ppBVar14);
    lib::L2CValue::~L2CValue((L2CValue *)auStack256);
    lib::L2CValue::~L2CValue((L2CValue *)auStack240);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack240 + 0x10));
  }
  lib::L2CValue::~L2CValue((L2CValue *)auStack208);
  lib::L2CValue::~L2CValue((L2CValue *)auStack192);
  lib::L2CValue::~L2CValue((L2CValue *)auStack176);
  lib::L2CValue::~L2CValue((L2CValue *)auStack160);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  pLVar8 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue((L2CValue *)local_180,SITUATION_KIND_AIR);
  uVar6 = lib::L2CValue::operator==(pLVar8,(L2CValue *)local_180);
  lib::L2CValue::~L2CValue((L2CValue *)local_180);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack400,SITUATION_KIND_AIR);
    lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0x70);
    lib::L2CValue::~L2CValue(aLStack400);
    lib::L2CValue::L2CValue((L2CValue *)local_180,GROUND_CORRECT_KIND_AIR);
    GVar5 = lib::L2CValue::as_integer((L2CValue *)local_180);
    app::lua_bind::GroundModule__correct_impl(*ppBVar14,GVar5);
    lib::L2CValue::~L2CValue((L2CValue *)local_180);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)auStack160);
  lib::L2CValue::L2CValue((L2CValue *)auStack176,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack176);
  uVar19 = app::sv_kinetic_energy::get_speed(this->luaStateAgent);
  lib::L2CValue::L2CValue((L2CValue *)local_180,(float)uVar19);
  pLVar8 = (L2CValue *)(local_180 + 0x10);
  lib::L2CValue::L2CValue(pLVar8,(float)((ulong)uVar19 >> 0x20));
  lib::L2CValue::operator=((L2CValue *)&local_60,(L2CValue *)local_180);
  lib::L2CValue::operator=((L2CValue *)auStack160,pLVar8);
  lib::L2CValue::~L2CValue(pLVar8);
  lib::L2CValue::~L2CValue((L2CValue *)local_180);
  lib::L2CValue::~L2CValue((L2CValue *)auStack176);
  fVar15 = (float)lib::L2CValue::as_number((L2CValue *)&local_60);
  fVar17 = (float)lib::L2CValue::as_number((L2CValue *)auStack160);
  fVar15 = (float)app::sv_math::vec2_length(fVar15,fVar17);
  lib::L2CValue::L2CValue((L2CValue *)local_180,fVar15);
  lib::L2CValue::L2CValue((L2CValue *)auStack192,0xf997d7d84);
  lib::L2CValue::L2CValue((L2CValue *)auStack208,0x9bc3ffffd);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack192);
  uVar10 = lib::L2CValue::as_integer((L2CValue *)auStack208);
  fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar14,uVar6,uVar10);
  lib::L2CValue::L2CValue((L2CValue *)auStack176,fVar15);
  lib::L2CValue::~L2CValue((L2CValue *)auStack208);
  lib::L2CValue::~L2CValue((L2CValue *)auStack192);
  lib::L2CValue::L2CValue((L2CValue *)auStack208,0xf997d7d84);
  lib::L2CValue::L2CValue((L2CValue *)(auStack240 + 0x10),0x151027d2ec);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack208);
  uVar10 = lib::L2CValue::as_integer((L2CValue *)(auStack240 + 0x10));
  fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar14,uVar6,uVar10);
  lib::L2CValue::L2CValue((L2CValue *)auStack192,fVar15);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack240 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)auStack208);
  lib::L2CValue::L2CValue(aLStack416,1.0);
  lib::L2CValue::L2CValue(aLStack432,(L2CValue *)auStack192);
  lib::L2CValue::operator/((L2CValue *)local_180,(L2CValue *)auStack176);
  lua2cpp::L2CFighterBase::lerp(this,(L2CValue)0x60,(L2CValue)0x50,(L2CValue)0x40);
  lib::L2CValue::~L2CValue(aLStack448);
  lib::L2CValue::~L2CValue(aLStack432);
  lib::L2CValue::~L2CValue(aLStack416);
  lib::L2CValue::L2CValue
            ((L2CValue *)(auStack240 + 0x10),_WEAPON_PACMAN_BIGPACMAN_MOTION_PART_SET_KIND_MATERIAL)
  ;
  iVar3 = lib::L2CValue::as_integer((L2CValue *)(auStack240 + 0x10));
  fVar15 = (float)lib::L2CValue::as_number((L2CValue *)auStack208);
  app::lua_bind::MotionModule__set_rate_partial_impl(*ppBVar14,iVar3,fVar15);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack240 + 0x10));
  lib::L2CValue::~L2CValue((L2CValue *)auStack208);
  lib::L2CValue::~L2CValue((L2CValue *)auStack192);
  lib::L2CValue::~L2CValue((L2CValue *)auStack176);
  lib::L2CValue::~L2CValue((L2CValue *)local_180);
  lib::L2CValue::~L2CValue((L2CValue *)auStack160);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack160,_WEAPON_PACMAN_BIGPACMAN_INSTANCE_WORK_ID_FLAG_FINISH_SPEED);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack160);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar14,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)local_180,false);
  uVar6 = lib::L2CValue::operator==((L2CValue *)&local_60,(L2CValue *)local_180);
  lib::L2CValue::~L2CValue((L2CValue *)local_180);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)auStack160);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0xf997d7d84);
    lib::L2CValue::L2CValue((L2CValue *)auStack160,0x1415ce1160);
    uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    uVar10 = lib::L2CValue::as_integer((L2CValue *)auStack160);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar14,uVar6,uVar10);
    lib::L2CValue::L2CValue((L2CValue *)local_180,iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)auStack160);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)auStack160,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack160);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar14,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)auStack160);
    lib::L2CValue::L2CValue((L2CValue *)auStack176,0xf997d7d84);
    lib::L2CValue::L2CValue((L2CValue *)auStack192,0x419cd3efe);
    uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack176);
    uVar10 = lib::L2CValue::as_integer((L2CValue *)auStack192);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar14,uVar6,uVar10);
    lib::L2CValue::L2CValue((L2CValue *)auStack160,iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)auStack192);
    lib::L2CValue::~L2CValue((L2CValue *)auStack176);
    lib::L2CValue::operator-((L2CValue *)auStack160,(L2CValue *)&local_60);
    uVar6 = lib::L2CValue::operator<=((L2CValue *)local_180,(L2CValue *)auStack176);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)auStack208,0xf997d7d84);
      lib::L2CValue::L2CValue((L2CValue *)(auStack240 + 0x10),0x1205ade05a);
      uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack208);
      uVar10 = lib::L2CValue::as_integer((L2CValue *)(auStack240 + 0x10));
      fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar14,uVar6,uVar10);
      lib::L2CValue::L2CValue((L2CValue *)auStack192,fVar15);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack240 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)auStack208);
      lib::L2CValue::L2CValue((L2CValue *)(auStack240 + 0x10),0xf997d7d84);
      lib::L2CValue::L2CValue((L2CValue *)auStack240,0x1239a0df03);
      uVar6 = lib::L2CValue::as_integer((L2CValue *)(auStack240 + 0x10));
      uVar10 = lib::L2CValue::as_integer((L2CValue *)auStack240);
      fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar14,uVar6,uVar10);
      lib::L2CValue::L2CValue((L2CValue *)auStack208,fVar15);
      lib::L2CValue::~L2CValue((L2CValue *)auStack240);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack240 + 0x10));
      lib::L2CValue::L2CValue((L2CValue *)(auStack240 + 0x10),(L2CValue *)local_180);
      lib::L2CValue::L2CValue((L2CValue *)auStack272,0xf997d7d84);
      lib::L2CValue::L2CValue((L2CValue *)auStack288,0x19a4872b36);
      uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack272);
      uVar10 = lib::L2CValue::as_integer((L2CValue *)auStack288);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar14,uVar6,uVar10);
      lib::L2CValue::L2CValue((L2CValue *)auStack256,iVar3);
      lib::L2CValue::operator-((L2CValue *)auStack160,(L2CValue *)auStack256);
      lib::L2CValue::~L2CValue((L2CValue *)auStack256);
      lib::L2CValue::~L2CValue((L2CValue *)auStack288);
      lib::L2CValue::~L2CValue((L2CValue *)auStack272);
      lib::L2CValue::operator-((L2CValue *)auStack240,(L2CValue *)(auStack240 + 0x10));
      lib::L2CValue::operator/((L2CValue *)auStack176,(L2CValue *)auStack272);
      lib::L2CValue::~L2CValue((L2CValue *)auStack272);
      lib::L2CValue::L2CValue(aLStack464,(L2CValue *)auStack192);
      lib::L2CValue::L2CValue(aLStack480,(L2CValue *)auStack208);
      lib::L2CValue::L2CValue(aLStack496,(L2CValue *)auStack256);
      lua2cpp::L2CFighterBase::lerp(this,(L2CValue)0x30,(L2CValue)0x20,(L2CValue)0x10);
      lib::L2CValue::~L2CValue(aLStack496);
      lib::L2CValue::~L2CValue(aLStack480);
      lib::L2CValue::~L2CValue(aLStack464);
      lib::L2CValue::L2CValue((L2CValue *)auStack288,0x118895390f);
      HVar12 = lib::L2CValue::as_hash((L2CValue *)auStack288);
      fVar15 = (float)lib::L2CValue::as_number((L2CValue *)auStack272);
      app::lua_bind::SoundModule__set_se_pitch_ratio_impl(*ppBVar14,HVar12,fVar15);
      lib::L2CValue::~L2CValue((L2CValue *)auStack288);
      lib::L2CValue::~L2CValue((L2CValue *)auStack272);
      lib::L2CValue::~L2CValue((L2CValue *)auStack256);
      lib::L2CValue::~L2CValue((L2CValue *)auStack240);
      lib::L2CValue::~L2CValue((L2CValue *)(auStack240 + 0x10));
      lib::L2CValue::~L2CValue((L2CValue *)auStack208);
      lib::L2CValue::~L2CValue((L2CValue *)auStack192);
    }
    lib::L2CValue::~L2CValue((L2CValue *)auStack176);
    lib::L2CValue::~L2CValue((L2CValue *)auStack160);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)local_180);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_7100006ba0:
  lib::L2CValue::~L2CValue((L2CValue *)(auStack160 + 0x10));
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

