
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100037030(L2CWeaponInklingInkbullet *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  float *pfVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  BattleObjectModuleAccessor **this_00;
  Hash40 HVar7;
  L2CValue *in_x2;
  float fVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  L2CValue aLStack736 [16];
  L2CValue aLStack720 [16];
  L2CValue aLStack704 [16];
  L2CValue aLStack688 [16];
  L2CValue aLStack672 [16];
  L2CValue aLStack656 [16];
  L2CValue aLStack640 [16];
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
  L2CValue aLStack320 [16];
  undefined local_130 [32];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  undefined auStack176 [32];
  L2CValue aLStack144 [16];
  undefined8 local_80;
  BattleObject *pBStack120;
  BattleObjectModuleAccessor *local_70;
  undefined8 uStack104;
  ulong local_60;
  BattleObject *pBStack88;
  
  lib::L2CValue::L2CValue((L2CValue *)local_130,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)local_130);
  fVar8 = (float)app::sv_kinetic_energy::get_speed_x(this->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack144,fVar8);
  lib::L2CValue::~L2CValue((L2CValue *)local_130);
  lib::L2CValue::L2CValue((L2CValue *)local_130,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)local_130);
  fVar8 = (float)app::sv_kinetic_energy::get_speed_y(this->luaStateAgent);
  lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),fVar8);
  lib::L2CValue::~L2CValue((L2CValue *)local_130);
  pLVar6 = (L2CValue *)(auStack176 + 0x10);
  lib::L2CAgent::math_atan((L2CAgent *)aLStack144,pLVar6,in_x2);
  lib::L2CAgent::math_deg((L2CAgent *)auStack176,pLVar6);
  lib::L2CAgent::math_abs((L2CAgent *)local_130,pLVar6);
  lib::L2CValue::~L2CValue((L2CValue *)local_130);
  lib::L2CValue::L2CValue((L2CValue *)local_130,90.0);
  lib::L2CValue::operator-(aLStack192,(L2CValue *)local_130);
  lib::L2CValue::~L2CValue((L2CValue *)local_130);
  lib::L2CValue::L2CValue(aLStack224);
  lib::L2CValue::L2CValue(aLStack240);
  lib::L2CValue::L2CValue(aLStack256);
  pfVar4 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)local_130,*pfVar4);
  pLVar6 = (L2CValue *)(local_130 + 0x10);
  lib::L2CValue::L2CValue(pLVar6,pfVar4[1]);
  lib::L2CValue::L2CValue(aLStack272,pfVar4[2]);
  lib::L2CValue::operator=(aLStack224,(L2CValue *)local_130);
  lib::L2CValue::operator=(aLStack240,pLVar6);
  lib::L2CValue::operator=(aLStack256,aLStack272);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(pLVar6);
  lib::L2CValue::~L2CValue((L2CValue *)local_130);
  fVar8 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar8);
  uVar10 = lib::L2CValue::as_number(aLStack224);
  lVar11 = lib::L2CValue::as_number(aLStack240);
  uVar9 = lib::L2CValue::as_number(aLStack256);
  local_130._0_8_ = (void **)(uVar10 & 0xffffffff | lVar11 << 0x20);
  local_130._8_8_ = (lua_State *)(ulong)uVar9;
  fVar8 = (float)lib::L2CValue::as_number((L2CValue *)&local_60);
  fVar8 = (float)app::GroundUtility::get_degree_gravity((Vector3f *)local_130,fVar8);
  lib::L2CValue::L2CValue(aLStack320,fVar8);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::operator+(aLStack208,aLStack320);
  lib::L2CValue::operator=(aLStack208,(L2CValue *)local_130);
  lib::L2CValue::~L2CValue((L2CValue *)local_130);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
  uVar10 = lib::L2CValue::as_number(aLStack208);
  lVar11 = lib::L2CValue::as_number((L2CValue *)&local_60);
  uVar9 = lib::L2CValue::as_number((L2CValue *)&local_70);
  local_130._0_8_ = (void **)(uVar10 & 0xffffffff | lVar11 << 0x20);
  local_130._8_8_ = (lua_State *)(ulong)uVar9;
  app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)local_130,0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)local_130,0.0);
  uVar10 = lib::L2CValue::operator<((L2CValue *)(auStack176 + 0x10),(L2CValue *)local_130);
  lib::L2CValue::~L2CValue((L2CValue *)local_130);
  if ((uVar10 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0xfcd9c54f9);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0xbd93356be);
    uVar10 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (this->moduleAccessor,uVar10,uVar5);
    lib::L2CValue::L2CValue((L2CValue *)local_130,fVar8);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,100.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_70);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)local_130);
    app::sv_kinetic_energy::set_stable_speed(this->luaStateAgent);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,100.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_70);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)local_130);
    app::sv_kinetic_energy::set_limit_speed(this->luaStateAgent);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)local_130);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_70,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)local_130,0);
  uVar10 = lib::L2CValue::operator<=((L2CValue *)&local_60,(L2CValue *)local_130);
  lib::L2CValue::~L2CValue((L2CValue *)local_130);
  lib::L2CValue::~L2CValue((L2CValue *)&local_60);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  if ((uVar10 & 1) == 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_60,_WEAPON_INKLING_INKBULLET_INSTANCE_WORK_ID_FLAG_HIT_WALL);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)local_130,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)local_130);
    lib::L2CValue::~L2CValue((L2CValue *)local_130);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_70,_GROUND_TOUCH_FLAG_ALL);
      uVar9 = lib::L2CValue::as_integer((L2CValue *)&local_70);
      bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar9);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_60);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        this_00 = &local_70;
      }
      else {
        pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0xe);
        lib::L2CValue::L2CValue((L2CValue *)local_130,1);
        uVar10 = lib::L2CValue::operator<=((L2CValue *)local_130,pLVar6);
        lib::L2CValue::~L2CValue((L2CValue *)local_130);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_70);
        if ((uVar10 & 1) == 0) goto LAB_71000379cc;
        lib::L2CValue::L2CValue
                  ((L2CValue *)local_130,_WEAPON_INKLING_INKBULLET_INSTANCE_WORK_ID_FLAG_HIT_WALL);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)local_130);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::~L2CValue((L2CValue *)local_130);
        pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0xe);
        lib::L2CValue::L2CValue((L2CValue *)local_130,1);
        uVar10 = lib::L2CValue::operator<=(pLVar6,(L2CValue *)local_130);
        lib::L2CValue::~L2CValue((L2CValue *)local_130);
        if ((uVar10 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack592,_WEAPON_INKLING_INKBULLET_STATUS_KIND_HIT);
          lib::L2CValue::L2CValue(aLStack608,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
          lib::L2CValue::~L2CValue(aLStack608);
          lib::L2CValue::~L2CValue(aLStack592);
          lib::L2CValue::L2CValue((L2CValue *)return_value,0);
          goto LAB_7100037e1c;
        }
        lib::L2CValue::L2CValue((L2CValue *)local_130,2);
        iVar3 = lib::L2CValue::as_integer((L2CValue *)local_130);
        app::lua_bind::StopModule__set_other_stop_impl(this->moduleAccessor,iVar3,0);
        this_00 = (BattleObjectModuleAccessor **)local_130;
      }
      lib::L2CValue::~L2CValue((L2CValue *)this_00);
    }
    else {
      pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0xe);
      lib::L2CValue::L2CValue((L2CValue *)local_130,2);
      uVar10 = lib::L2CValue::operator<=((L2CValue *)local_130,pLVar6);
      lib::L2CValue::~L2CValue((L2CValue *)local_130);
      if ((uVar10 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack560,_WEAPON_INKLING_INKBULLET_STATUS_KIND_HIT);
        lib::L2CValue::L2CValue(aLStack576,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xd0,(L2CValue)0xc0);
        lib::L2CValue::~L2CValue(aLStack576);
        lib::L2CValue::~L2CValue(aLStack560);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        goto LAB_7100037e1c;
      }
    }
LAB_71000379cc:
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_60,_WEAPON_INKLING_INKBULLET_INSTANCE_WORK_ID_FLAG_HIT);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)local_130,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)local_130);
    lib::L2CValue::~L2CValue((L2CValue *)local_130);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack624,_WEAPON_INKLING_INKBULLET_STATUS_KIND_HIT);
      lib::L2CValue::L2CValue(aLStack640,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x80);
      lib::L2CValue::~L2CValue(aLStack640);
      lib::L2CValue::~L2CValue(aLStack624);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_7100037e1c;
    }
    lib::L2CValue::L2CValue((L2CValue *)local_130,0xfcd9c54f9);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0xdec34698e);
    uVar10 = lib::L2CValue::as_integer((L2CValue *)local_130);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (this->moduleAccessor,uVar10,uVar5);
    lib::L2CValue::L2CValue(aLStack336,fVar8);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)local_130);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0x66933a7e6);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,100);
    HVar7 = lib::L2CValue::as_hash((L2CValue *)&local_60);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    uVar9 = app::sv_math::rand(HVar7,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)local_130,uVar9);
    uVar10 = lib::L2CValue::operator<((L2CValue *)local_130,aLStack336);
    lib::L2CValue::~L2CValue((L2CValue *)local_130);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    if ((uVar10 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)local_130,0xfcd9c54f9);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0x1215f7ab3b);
      uVar10 = lib::L2CValue::as_integer((L2CValue *)local_130);
      uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar10,uVar5);
      lib::L2CValue::L2CValue(aLStack352,fVar8);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)local_130);
      lib::L2CValue::L2CValue(aLStack368,1.0);
      lib::L2CValue::L2CValue(aLStack384);
      lib::L2CValue::L2CValue(aLStack400);
      lib::L2CValue::L2CValue(aLStack416);
      lib::L2CValue::L2CValue(aLStack432,0.0);
      lib::L2CValue::operator-(aLStack352);
      lib::L2CValue::L2CValue(aLStack656,true);
      uVar10 = lib::L2CValue::as_number(aLStack224);
      uVar9 = lib::L2CValue::as_number(aLStack240);
      local_60 = uVar10 & 0xffffffff | (ulong)uVar9 << 0x20;
      pBStack88 = (BattleObject *)0x0;
      uVar10 = lib::L2CValue::as_number(aLStack432);
      uVar9 = lib::L2CValue::as_number(aLStack448);
      local_70 = (BattleObjectModuleAccessor *)(uVar10 & 0xffffffff | (ulong)uVar9 << 0x20);
      uStack104 = 0;
      uVar10 = lib::L2CValue::as_number(aLStack224);
      uVar9 = lib::L2CValue::as_number(aLStack240);
      local_80 = (Hash40MapEntry **)(uVar10 & 0xffffffff | (ulong)uVar9 << 0x20);
      pBStack120 = (BattleObject *)0x0;
      bVar1 = lib::L2CValue::as_bool(aLStack656);
      bVar1 = app::lua_bind::GroundModule__ray_check_hit_pos_impl
                        (this->moduleAccessor,(Vector2f *)&local_60,(Vector2f *)&local_70,
                         (Vector2f *)&local_80,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue((L2CValue *)local_130,(bool)(bVar1 & 1));
      pLVar6 = (L2CValue *)(local_130 + 0x10);
      lib::L2CValue::L2CValue(pLVar6,(float)local_80);
      lib::L2CValue::L2CValue(aLStack272,local_80._4_4_);
      lib::L2CValue::operator=(aLStack384,(L2CValue *)local_130);
      lib::L2CValue::operator=(aLStack400,pLVar6);
      lib::L2CValue::operator=(aLStack416,aLStack272);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue(pLVar6);
      lib::L2CValue::~L2CValue((L2CValue *)local_130);
      lib::L2CValue::~L2CValue(aLStack656);
      lib::L2CValue::~L2CValue(aLStack448);
      lib::L2CValue::~L2CValue(aLStack432);
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack384);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack672,aLStack400);
        lib::L2CValue::L2CValue(aLStack688,aLStack416);
        lib::L2CValue::L2CValue(aLStack704,aLStack256);
        fVar8 = (float)app::lua_bind::PostureModule__scale_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue((L2CValue *)local_130,fVar8);
        lib::L2CValue::operator*(aLStack368,(L2CValue *)local_130);
        fVar8 = (float)app::lua_bind::PostureModule__scale_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar8);
        lib::L2CValue::operator*(aLStack368,(L2CValue *)&local_60);
        FUN_71000369c0(this,aLStack672,aLStack688,aLStack704,aLStack720,aLStack736);
        lib::L2CValue::~L2CValue(aLStack736);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::~L2CValue(aLStack720);
        lib::L2CValue::~L2CValue((L2CValue *)local_130);
        lib::L2CValue::~L2CValue(aLStack704);
        lib::L2CValue::~L2CValue(aLStack688);
        lib::L2CValue::~L2CValue(aLStack672);
      }
      lib::L2CValue::~L2CValue(aLStack416);
      lib::L2CValue::~L2CValue(aLStack400);
      lib::L2CValue::~L2CValue(aLStack384);
      lib::L2CValue::~L2CValue(aLStack368);
      lib::L2CValue::~L2CValue(aLStack352);
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)local_130,5);
    uVar9 = lib::L2CValue::as_integer((L2CValue *)local_130);
    app::lua_bind::EffectModule__detach_all_impl(this->moduleAccessor,uVar9);
    lib::L2CValue::~L2CValue((L2CValue *)local_130);
    lib::L2CValue::L2CValue((L2CValue *)local_130,0xfcd9c54f9);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0x1215f7ab3b);
    uVar10 = lib::L2CValue::as_integer((L2CValue *)local_130);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (this->moduleAccessor,uVar10,uVar5);
    lib::L2CValue::L2CValue(aLStack336,fVar8);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)local_130);
    lib::L2CValue::L2CValue(aLStack352,1.0);
    lib::L2CValue::L2CValue(aLStack368);
    lib::L2CValue::L2CValue(aLStack384);
    lib::L2CValue::L2CValue(aLStack400);
    lib::L2CValue::L2CValue(aLStack416,0.0);
    lib::L2CValue::operator-(aLStack336);
    lib::L2CValue::L2CValue(aLStack448,true);
    uVar10 = lib::L2CValue::as_number(aLStack224);
    uVar9 = lib::L2CValue::as_number(aLStack240);
    local_60 = uVar10 & 0xffffffff | (ulong)uVar9 << 0x20;
    pBStack88 = (BattleObject *)0x0;
    uVar10 = lib::L2CValue::as_number(aLStack416);
    uVar9 = lib::L2CValue::as_number(aLStack432);
    local_70 = (BattleObjectModuleAccessor *)(uVar10 & 0xffffffff | (ulong)uVar9 << 0x20);
    uStack104 = 0;
    uVar10 = lib::L2CValue::as_number(aLStack224);
    uVar9 = lib::L2CValue::as_number(aLStack240);
    local_80 = (Hash40MapEntry **)(uVar10 & 0xffffffff | (ulong)uVar9 << 0x20);
    pBStack120 = (BattleObject *)0x0;
    bVar1 = lib::L2CValue::as_bool(aLStack448);
    bVar1 = app::lua_bind::GroundModule__ray_check_hit_pos_impl
                      (this->moduleAccessor,(Vector2f *)&local_60,(Vector2f *)&local_70,
                       (Vector2f *)&local_80,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)local_130,(bool)(bVar1 & 1));
    pLVar6 = (L2CValue *)(local_130 + 0x10);
    lib::L2CValue::L2CValue(pLVar6,(float)local_80);
    lib::L2CValue::L2CValue(aLStack272,local_80._4_4_);
    lib::L2CValue::operator=(aLStack368,(L2CValue *)local_130);
    lib::L2CValue::operator=(aLStack384,pLVar6);
    lib::L2CValue::operator=(aLStack400,aLStack272);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(pLVar6);
    lib::L2CValue::~L2CValue((L2CValue *)local_130);
    lib::L2CValue::~L2CValue(aLStack448);
    lib::L2CValue::~L2CValue(aLStack432);
    lib::L2CValue::~L2CValue(aLStack416);
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack368);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack464,aLStack384);
      lib::L2CValue::L2CValue(aLStack480,aLStack400);
      lib::L2CValue::L2CValue(aLStack496,aLStack256);
      fVar8 = (float)app::lua_bind::PostureModule__scale_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue((L2CValue *)local_130,fVar8);
      lib::L2CValue::operator*(aLStack352,(L2CValue *)local_130);
      fVar8 = (float)app::lua_bind::PostureModule__scale_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar8);
      lib::L2CValue::operator*(aLStack352,(L2CValue *)&local_60);
      FUN_71000369c0(this,aLStack464,aLStack480,aLStack496,aLStack512,aLStack528);
      lib::L2CValue::~L2CValue(aLStack528);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::~L2CValue(aLStack512);
      lib::L2CValue::~L2CValue((L2CValue *)local_130);
      lib::L2CValue::~L2CValue(aLStack496);
      lib::L2CValue::~L2CValue(aLStack480);
      lib::L2CValue::~L2CValue(aLStack464);
    }
    lib::L2CValue::L2CValue((L2CValue *)local_130,0x199c462b5d);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)local_130);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::~L2CValue(aLStack544);
    lib::L2CValue::~L2CValue((L2CValue *)local_130);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    lib::L2CValue::~L2CValue(aLStack400);
    lib::L2CValue::~L2CValue(aLStack384);
    lib::L2CValue::~L2CValue(aLStack368);
    lib::L2CValue::~L2CValue(aLStack352);
  }
  lib::L2CValue::~L2CValue(aLStack336);
LAB_7100037e1c:
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue((L2CValue *)auStack176);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack176 + 0x10));
  lib::L2CValue::~L2CValue(aLStack144);
  return;
}

