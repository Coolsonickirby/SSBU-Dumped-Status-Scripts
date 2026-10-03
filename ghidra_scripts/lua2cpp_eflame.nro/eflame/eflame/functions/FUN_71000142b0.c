
void FUN_71000142b0(L2CFighterCommon *param_1,L2CValue *param_2)

{
  bool bVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_2);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack96,0xf899192aa);
    lua2cpp::L2CFighterCommon::sub_exec_special_start_common_kinetic_setting(param_1,(L2CValue)0xa0)
    ;
    pLVar2 = aLStack96;
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,0xf899192aa);
    lua2cpp::L2CFighterCommon::sub_set_special_start_common_kinetic_setting(param_1,(L2CValue)0xb0);
    pLVar2 = aLStack80;
  }
  lib::L2CValue::~L2CValue(pLVar2);
  pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack64,SITUATION_KIND_AIR);
  uVar3 = lib::L2CValue::operator==(pLVar2,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)param_1);
    lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack112);
    fVar5 = (float)app::sv_kinetic_energy::get_speed_y(param_1->luaStateAgent);
    lib::L2CValue::L2CValue(aLStack64,fVar5);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack128,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack144,0x172bd64901);
    uVar3 = lib::L2CValue::as_integer(aLStack128);
    uVar4 = lib::L2CValue::as_integer(aLStack144);
    fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (param_1->moduleAccessor,uVar3,uVar4);
    lib::L2CValue::L2CValue(aLStack112,fVar5);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    uVar3 = lib::L2CValue::operator<(aLStack112,aLStack64);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::operator=(aLStack64,aLStack112);
      lib::L2CValue::L2CValue(aLStack128,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)param_1);
      lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack128);
      lib::L2CAgent::push_lua_stack((L2CAgent *)param_1,aLStack64);
      app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack128);
    }
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack64);
  }
  return;
}

