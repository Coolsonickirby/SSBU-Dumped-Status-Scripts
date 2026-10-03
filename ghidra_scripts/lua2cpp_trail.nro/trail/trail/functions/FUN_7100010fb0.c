
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100010fb0(L2CAgent *param_1,L2CValue *param_2,L2CValue *param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *this;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  iVar3 = lib::L2CValue::as_integer(param_2);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_1->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((bVar2 & 1U) != 0) {
    iVar3 = lib::L2CValue::as_integer(param_2);
    app::lua_bind::WorkModule__off_flag_impl(param_1->moduleAccessor,iVar3);
    this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1[2].battleObject,0x16);
    lib::L2CValue::L2CValue(aLStack64,SITUATION_KIND_AIR);
    uVar4 = lib::L2CValue::operator==(this,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar4 & 1) != 0) {
      iVar3 = lib::L2CValue::as_integer(param_3);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_1->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack64,false);
      uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar4 & 1) != 0) {
        iVar3 = lib::L2CValue::as_integer(param_3);
        app::lua_bind::WorkModule__on_flag_impl(param_1->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack96,0xf899192aa);
        lib::L2CValue::L2CValue(aLStack112,0xf17423787);
        uVar4 = lib::L2CValue::as_integer(aLStack96);
        uVar5 = lib::L2CValue::as_integer(aLStack112);
        fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (param_1->moduleAccessor,uVar4,uVar5);
        lib::L2CValue::L2CValue(aLStack80,fVar6);
        fVar6 = (float)app::lua_bind::PostureModule__lr_impl(param_1->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack128,fVar6);
        lib::L2CValue::operator*(aLStack80,aLStack128);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,0xf899192aa);
        lib::L2CValue::L2CValue(aLStack112,0xf60450711);
        uVar4 = lib::L2CValue::as_integer(aLStack96);
        uVar5 = lib::L2CValue::as_integer(aLStack112);
        fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (param_1->moduleAccessor,uVar4,uVar5);
        lib::L2CValue::L2CValue(aLStack80,fVar6);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
        lib::L2CValue::L2CValue(aLStack112,ENERGY_STOP_RESET_TYPE_AIR);
        lib::L2CValue::L2CValue(aLStack128,0.0);
        lib::L2CValue::L2CValue(aLStack144,0.0);
        lib::L2CValue::L2CValue(aLStack160,0.0);
        lib::L2CValue::L2CValue(aLStack176,0.0);
        lib::L2CAgent::clear_lua_stack(param_1);
        lib::L2CAgent::push_lua_stack(param_1,aLStack96);
        lib::L2CAgent::push_lua_stack(param_1,aLStack112);
        lib::L2CAgent::push_lua_stack(param_1,aLStack64);
        lib::L2CAgent::push_lua_stack(param_1,aLStack128);
        lib::L2CAgent::push_lua_stack(param_1,aLStack144);
        lib::L2CAgent::push_lua_stack(param_1,aLStack160);
        lib::L2CAgent::push_lua_stack(param_1,aLStack176);
        app::sv_kinetic_energy::reset_energy(param_1->luaStateAgent);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
        lib::L2CAgent::clear_lua_stack(param_1);
        lib::L2CAgent::push_lua_stack(param_1,aLStack96);
        app::sv_kinetic_energy::enable(param_1->luaStateAgent);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
        lib::L2CAgent::clear_lua_stack(param_1);
        lib::L2CAgent::push_lua_stack(param_1,aLStack96);
        lib::L2CAgent::push_lua_stack(param_1,aLStack80);
        app::sv_kinetic_energy::add_speed(param_1->luaStateAgent);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack64);
      }
    }
  }
  return;
}

