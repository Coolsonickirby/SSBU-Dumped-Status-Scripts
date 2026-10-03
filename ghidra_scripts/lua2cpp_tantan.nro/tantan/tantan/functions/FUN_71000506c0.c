
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000506c0(L2CAgent *param_1,L2CValue *param_2)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  L2CValue *this;
  ulong uVar4;
  float fVar5;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar3 = lib::L2CValue::operator==(param_2,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar3 & 1) != 0) {
    this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1[2].battleObject,0x16);
    lib::L2CValue::L2CValue(aLStack64,SITUATION_KIND_AIR);
    uVar3 = lib::L2CValue::operator==(this,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_AIR_HOP);
      iVar2 = lib::L2CValue::as_integer(aLStack96);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_1->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack64,false);
      uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar3 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
        lib::L2CAgent::clear_lua_stack(param_1);
        lib::L2CAgent::push_lua_stack(param_1,aLStack80);
        fVar5 = (float)app::sv_kinetic_energy::get_speed_y(param_1->luaStateAgent);
        lib::L2CValue::L2CValue(aLStack64,fVar5);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack96,0xc1f106e8d);
        lib::L2CValue::L2CValue(aLStack112,0x15c9231239);
        uVar3 = lib::L2CValue::as_integer(aLStack96);
        uVar4 = lib::L2CValue::as_integer(aLStack112);
        fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (param_1->moduleAccessor,uVar3,uVar4);
        lib::L2CValue::L2CValue(aLStack80,fVar5);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack96);
        uVar3 = lib::L2CValue::operator<(aLStack64,aLStack80);
        if ((uVar3 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack112,0xc1f106e8d);
          lib::L2CValue::L2CValue(aLStack128,0xb0d756857);
          uVar3 = lib::L2CValue::as_integer(aLStack112);
          uVar4 = lib::L2CValue::as_integer(aLStack128);
          fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                   (param_1->moduleAccessor,uVar3,uVar4);
          lib::L2CValue::L2CValue(aLStack96,fVar5);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
          lib::L2CAgent::clear_lua_stack(param_1);
          lib::L2CAgent::push_lua_stack(param_1,aLStack112);
          lib::L2CAgent::push_lua_stack(param_1,aLStack96);
          app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue(aLStack96);
        }
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_AIR_HOP);
        iVar2 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__on_flag_impl(param_1->moduleAccessor,iVar2);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack64);
      }
    }
  }
  return;
}

