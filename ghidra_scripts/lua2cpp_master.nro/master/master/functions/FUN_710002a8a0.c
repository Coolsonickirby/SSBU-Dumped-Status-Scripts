
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710002a8a0(L2CValue *param_1,L2CFighterCommon *param_2,L2CValue *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MASTER_STATUS_SPECIAL_HI_INT_WALL_JUMP_STOP_FRAME);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack80,iVar2);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0);
    uVar4 = lib::L2CValue::operator<(aLStack64,aLStack80);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,1);
      lib::L2CValue::operator-(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::operator=(aLStack80,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack64,0);
      uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar4 & 1) != 0) {
        lua2cpp::L2CFighterCommon::sub_air_check_fall_common_pre(param_2);
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_TYPE_WALL_JUMP);
        iVar2 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::KineticModule__change_kinetic_impl(param_2->moduleAccessor,iVar2);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::L2CValue(aLStack96,0x1086bc4a93);
        lib::L2CValue::L2CValue(aLStack112,0x15106256d4);
        uVar4 = lib::L2CValue::as_integer(aLStack96);
        uVar5 = lib::L2CValue::as_integer(aLStack112);
        fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (param_2->moduleAccessor,uVar4,uVar5);
        lib::L2CValue::L2CValue(aLStack64,fVar6);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)param_2);
        lib::L2CAgent::push_lua_stack((L2CAgent *)param_2,aLStack112);
        fVar6 = (float)app::sv_kinetic_energy::get_speed_x(param_2->luaStateAgent);
        lib::L2CValue::L2CValue(aLStack96,fVar6);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
        lib::L2CValue::operator*(aLStack96,aLStack64);
        lib::L2CValue::L2CValue(aLStack144,0.0);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)param_2);
        lib::L2CAgent::push_lua_stack((L2CAgent *)param_2,aLStack112);
        lib::L2CAgent::push_lua_stack((L2CAgent *)param_2,aLStack128);
        lib::L2CAgent::push_lua_stack((L2CAgent *)param_2,aLStack144);
        app::sv_kinetic_energy::set_speed(param_2->luaStateAgent);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack112);
        app::lua_bind::FighterStatusModuleImpl__off_disable_intrrupt_warp_impl
                  (param_2->moduleAccessor);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack64);
      }
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_MASTER_STATUS_SPECIAL_HI_INT_WALL_JUMP_STOP_FRAME);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__set_int_impl(param_2->moduleAccessor,iVar2,iVar3);
      lib::L2CValue::~L2CValue(aLStack64);
    }
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

