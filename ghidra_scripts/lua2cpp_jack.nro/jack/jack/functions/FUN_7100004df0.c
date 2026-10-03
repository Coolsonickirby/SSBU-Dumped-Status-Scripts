
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100004df0(L2CFighterJack *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  float fVar8;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack112,0xccd412d52);
  uVar5 = lib::L2CValue::as_integer(aLStack96);
  uVar6 = lib::L2CValue::as_integer(aLStack112);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_JACK_STATUS_SPECIAL_HI2_INT_STOP_Y_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  iVar4 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,true);
  lib::L2CValue::L2CValue(aLStack112,0xb9a9828b2);
  lib::L2CValue::L2CValue(aLStack128,0xf6d0a2d85);
  FUN_7100008540(this,aLStack96,aLStack112,aLStack128);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  FUN_71000088e0(this);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
  uVar5 = lib::L2CValue::operator==(pLVar7,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack144,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    fVar8 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,fVar8);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack176,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack192,0xcbcd611cb);
    uVar5 = lib::L2CValue::as_integer(aLStack176);
    uVar6 = lib::L2CValue::as_integer(aLStack192);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6)
    ;
    lib::L2CValue::L2CValue(aLStack160,fVar8);
    lib::L2CValue::operator*(aLStack80,aLStack160);
    lib::L2CValue::operator=(aLStack80,aLStack144);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CValue::L2CValue(aLStack160,ENERGY_STOP_RESET_TYPE_AIR);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    lib::L2CValue::L2CValue(aLStack192,0.0);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    lib::L2CValue::L2CValue(aLStack224,0.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
    app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack144,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    lib::L2CValue::L2CValue(aLStack160,0.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
    app::sv_kinetic_energy::set_speed(this->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar5 = lib::L2CValue::operator==(aLStack144,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack144);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack160,false);
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack160);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_JACK_STATUS_SPECIAL_HI2_INT_STOP_Y_FRAME);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__dec_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::~L2CValue(aLStack80);
    }
    lib::L2CValue::L2CValue(aLStack144,0);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack160);
  }
  pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x15);
  lib::L2CValue::L2CValue(aLStack80,FUN_7100008a70);
  lib::L2CValue::operator=(pLVar7,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_JACK_GENERATE_ARTICLE_DOYLE);
  lib::L2CValue::L2CValue(aLStack176,_WEAPON_JACK_DOYLE_STATUS_KIND_SPECIAL_HI);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  iVar4 = lib::L2CValue::as_integer(aLStack176);
  app::lua_bind::ArticleModule__change_status_impl(this->moduleAccessor,iVar3,iVar4,0);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack176,0x20cbc92683);
  lib::L2CValue::L2CValue(aLStack192,1);
  lib::L2CValue::L2CValue(aLStack208,_FIGHTER_LOG_DATA_INT_ATTACK_NUM_KIND);
  lib::L2CValue::L2CValue(aLStack224,_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_12 + -1);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack176,FUN_7100008b20);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x50);
  lib::L2CValue::~L2CValue(aLStack176);
  return;
}

