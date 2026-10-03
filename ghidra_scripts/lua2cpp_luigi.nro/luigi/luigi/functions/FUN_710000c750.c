
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_710000c750(L2CFighterLuigi *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue *this_00;
  float fVar6;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::~L2CValue(aLStack80);
LAB_710000c84c:
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LUIGI_STATUS_SPECIAL_S_WALL_FLAG_DETACH);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((bVar2 & 1U) != 0) {
      app::lua_bind::GroundModule__detach_impl(this->moduleAccessor,0);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_LUIGI_STATUS_SPECIAL_S_WALL_FLAG_DETACH);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,FUN_710000cc20);
      lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xc0);
      lib::L2CValue::~L2CValue(aLStack64);
      return;
    }
    fVar6 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,fVar6);
    lib::L2CValue::L2CValue(aLStack64,37.0);
    uVar4 = lib::L2CValue::operator<=(aLStack64,aLStack80);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) goto LAB_710000cae0;
    lib::L2CValue::L2CValue(aLStack64,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    lib::L2CValue::L2CValue(aLStack128,0xba18057d9);
    lib::L2CValue::L2CValue(aLStack144,0);
    uVar4 = lib::L2CValue::as_integer(aLStack128);
    uVar5 = lib::L2CValue::as_integer(aLStack144);
    fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5)
    ;
    lib::L2CValue::L2CValue(aLStack96,fVar6);
    lib::L2CValue::operator-(aLStack96);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack64);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
    app::sv_kinetic_energy::set_accel(this->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    lib::L2CValue::L2CValue(aLStack96,0x12ec5626fe);
    lib::L2CValue::L2CValue(aLStack128,0);
    uVar4 = lib::L2CValue::as_integer(aLStack96);
    uVar5 = lib::L2CValue::as_integer(aLStack128);
    fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5)
    ;
    lib::L2CValue::L2CValue(aLStack80,fVar6);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack64);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
    app::sv_kinetic_energy::set_stable_speed(this->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar3);
    this_00 = aLStack64;
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x90);
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar4 = lib::L2CValue::operator==(aLStack96,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar4 & 1) != 0) {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack64,false);
      uVar4 = lib::L2CValue::operator==(aLStack128,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar4 & 1) == 0) goto LAB_710000cae0;
      goto LAB_710000c84c;
    }
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    this_00 = aLStack80;
  }
  lib::L2CValue::~L2CValue(this_00);
LAB_710000cae0:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

