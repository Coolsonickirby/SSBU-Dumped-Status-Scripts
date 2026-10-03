
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71001fe7e0(L2CValue *param_1,L2CAgent *param_2,L2CValue *param_3)

{
  bool bVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2[2].battleObject,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar4 = lib::L2CValue::operator==(pLVar3,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((bVar1 & 1U) == 0) {
    if ((uVar4 & 1) != 0) goto LAB_71001feacc;
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_ZELDA_STATUS_SPECIAL_N_WORK_INT_STOP_Y);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack96,iVar2);
    lib::L2CValue::L2CValue(aLStack80,0);
    uVar4 = lib::L2CValue::operator<=(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,aLStack80);
      fVar6 = (float)app::sv_kinetic_energy::get_speed_y(param_2->luaStateAgent);
      lib::L2CValue::L2CValue(aLStack96,fVar6);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0.0);
      uVar4 = lib::L2CValue::operator<(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
        iVar2 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::KineticModule__unable_energy_impl(param_2->moduleAccessor,iVar2);
        goto LAB_71001feabc;
      }
      goto LAB_71001feac4;
    }
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::KineticModule__enable_energy_impl(param_2->moduleAccessor,iVar2);
    pLVar3 = aLStack80;
  }
  else {
    if ((uVar4 & 1) != 0) goto LAB_71001feacc;
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ZELDA_STATUS_SPECIAL_N_WORK_INT_STOP_Y);
    pLVar3 = (L2CValue *)lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__dec_int_impl(param_2->moduleAccessor,(int)pLVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    fVar6 = (float)app::lua_bind::ControlModule__get_stick_x_impl(param_2->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,fVar6);
    lib::L2CAgent::math_abs((L2CAgent *)aLStack96,pLVar3);
    lib::L2CValue::L2CValue(aLStack80,1e-05);
    uVar4 = lib::L2CValue::operator<(aLStack80,aLStack112);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack128,0x111497a323);
      uVar4 = lib::L2CValue::as_integer(aLStack112);
      uVar5 = lib::L2CValue::as_integer(aLStack128);
      fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (param_2->moduleAccessor,uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack80,fVar6);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CValue::operator*(aLStack96,aLStack80);
      lib::L2CValue::L2CValue(aLStack144,0.0);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,aLStack112);
      lib::L2CAgent::push_lua_stack(param_2,aLStack128);
      lib::L2CAgent::push_lua_stack(param_2,aLStack144);
      app::sv_kinetic_energy::add_speed(param_2->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
LAB_71001feabc:
      lib::L2CValue::~L2CValue(aLStack80);
    }
LAB_71001feac4:
    pLVar3 = aLStack96;
  }
  lib::L2CValue::~L2CValue(pLVar3);
LAB_71001feacc:
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

