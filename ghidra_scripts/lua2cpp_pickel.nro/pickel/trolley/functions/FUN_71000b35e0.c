
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000b35e0(L2CAgent *param_1,L2CValue *param_2)

{
  long lVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  Hash40 HVar9;
  float fVar10;
  undefined8 uVar11;
  L2CValue aLStack240 [16];
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
  
  bVar2 = lib::L2CValue::operator.cast.to.bool(param_2);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack80,GROUND_TOUCH_FLAG_RIGHT | _GROUND_TOUCH_FLAG_LEFT);
    uVar4 = lib::L2CValue::as_integer(aLStack80);
    bVar3 = app::lua_bind::GroundModule__is_touch_impl(param_1->moduleAccessor,uVar4);
    lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,(bool)(bVar3 & 1));
    lib::L2CValue::operator!((L2CValue *)&stack0xffffffffffffffc0);
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack240);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffc0);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack240,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,aLStack240);
      fVar10 = (float)app::sv_kinetic_energy::get_speed_x(param_1->luaStateAgent);
      lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,fVar10);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::L2CValue(aLStack240,0.0);
      pLVar8 = aLStack240;
      uVar6 = lib::L2CValue::operator<((L2CValue *)&stack0xffffffffffffffc0,pLVar8);
      lib::L2CValue::~L2CValue(aLStack240);
      if ((uVar6 & 1) == 0) {
        lib::L2CAgent::math_abs((L2CAgent *)&stack0xffffffffffffffc0,pLVar8);
        lib::L2CValue::L2CValue(aLStack128,0xdfbf78d6f);
        lib::L2CValue::L2CValue(aLStack144,0x19828af856);
        uVar6 = lib::L2CValue::as_integer(aLStack128);
        uVar7 = lib::L2CValue::as_integer(aLStack144);
        fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                  (param_1->moduleAccessor,uVar6,uVar7);
        lib::L2CValue::L2CValue(aLStack112,fVar10);
        lib::L2CValue::operator*(aLStack96,aLStack112);
        lib::L2CValue::L2CValue(aLStack176,0xdfbf78d6f);
        lib::L2CValue::L2CValue(aLStack192,0x19cfd7288d);
        uVar6 = lib::L2CValue::as_integer(aLStack176);
        pLVar8 = (L2CValue *)lib::L2CValue::as_integer(aLStack192);
        fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                  (param_1->moduleAccessor,uVar6,(ulong)pLVar8);
        lib::L2CValue::L2CValue(aLStack160,fVar10);
        lib::L2CAgent::math_min((L2CAgent *)aLStack80,aLStack160,pLVar8);
        lib::L2CValue::operator=((L2CValue *)&stack0xffffffffffffffc0,aLStack240);
        lib::L2CValue::~L2CValue(aLStack240);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack128);
        lVar1 = -0x50;
      }
      else {
        lib::L2CAgent::math_abs((L2CAgent *)&stack0xffffffffffffffc0,pLVar8);
        lib::L2CValue::L2CValue(aLStack144,0xdfbf78d6f);
        lib::L2CValue::L2CValue(aLStack160,0x19828af856);
        uVar6 = lib::L2CValue::as_integer(aLStack144);
        uVar7 = lib::L2CValue::as_integer(aLStack160);
        fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                  (param_1->moduleAccessor,uVar6,uVar7);
        lib::L2CValue::L2CValue(aLStack128,fVar10);
        lib::L2CValue::operator*(aLStack112,aLStack128);
        lib::L2CValue::L2CValue(aLStack192,0xdfbf78d6f);
        lib::L2CValue::L2CValue(aLStack208,0x19cfd7288d);
        uVar6 = lib::L2CValue::as_integer(aLStack192);
        pLVar8 = (L2CValue *)lib::L2CValue::as_integer(aLStack208);
        fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                  (param_1->moduleAccessor,uVar6,(ulong)pLVar8);
        lib::L2CValue::L2CValue(aLStack176,fVar10);
        lib::L2CAgent::math_min((L2CAgent *)aLStack96,aLStack176,pLVar8);
        lib::L2CValue::operator-(aLStack80);
        lib::L2CValue::operator=((L2CValue *)&stack0xffffffffffffffc0,aLStack240);
        lib::L2CValue::~L2CValue(aLStack240);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack144);
        lVar1 = -0x60;
      }
      lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
      lib::L2CValue::L2CValue(aLStack240,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
      lib::L2CValue::L2CValue(aLStack80,0.0);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,aLStack240);
      lib::L2CAgent::push_lua_stack(param_1,(L2CValue *)&stack0xffffffffffffffc0);
      lib::L2CAgent::push_lua_stack(param_1,aLStack80);
      app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack96);
      uVar11 = app::lua_bind::PostureModule__prev_pos_2d_impl(param_1->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack240,(float)uVar11);
      lib::L2CValue::L2CValue(aLStack224,(float)((ulong)uVar11 >> 0x20));
      lib::L2CValue::operator=(aLStack80,aLStack240);
      lib::L2CValue::operator=(aLStack96,aLStack224);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack240);
      fVar10 = (float)app::lua_bind::PostureModule__pos_y_impl(param_1->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack128,fVar10);
      lib::L2CValue::operator-(aLStack128,aLStack96);
      lib::L2CValue::L2CValue(aLStack160,0xdfbf78d6f);
      lib::L2CValue::L2CValue(aLStack176,0x158a374ed7);
      uVar6 = lib::L2CValue::as_integer(aLStack160);
      uVar7 = lib::L2CValue::as_integer(aLStack176);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (param_1->moduleAccessor,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack144,fVar10);
      lib::L2CValue::operator+(aLStack112,aLStack144);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack128,0xdfbf78d6f);
      lib::L2CValue::L2CValue(aLStack144,0xd3bcea1fa);
      uVar6 = lib::L2CValue::as_integer(aLStack128);
      uVar7 = lib::L2CValue::as_integer(aLStack144);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (param_1->moduleAccessor,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack112,fVar10);
      uVar6 = lib::L2CValue::operator<(aLStack112,aLStack240);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack128,0xdfbf78d6f);
        lib::L2CValue::L2CValue(aLStack144,0xd3bcea1fa);
        uVar6 = lib::L2CValue::as_integer(aLStack128);
        uVar7 = lib::L2CValue::as_integer(aLStack144);
        fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                  (param_1->moduleAccessor,uVar6,uVar7);
        lib::L2CValue::L2CValue(aLStack112,fVar10);
        lib::L2CValue::operator=(aLStack240,aLStack112);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack128);
      }
      lib::L2CValue::L2CValue(aLStack112,_WEAPON_PICKEL_TROLLEY_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CAgent::clear_lua_stack(param_1);
      lib::L2CAgent::push_lua_stack(param_1,aLStack112);
      lib::L2CAgent::push_lua_stack(param_1,aLStack240);
      app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffc0);
    }
  }
  lib::L2CValue::L2CValue(aLStack240,_WEAPON_ANIMCMD_EFFECT);
  lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,0x1872bdc41c);
  iVar5 = lib::L2CValue::as_integer(aLStack240);
  HVar9 = lib::L2CValue::as_hash((L2CValue *)&stack0xffffffffffffffc0);
  app::lua_bind::MotionAnimcmdModule__call_script_single_impl
            (param_1->moduleAccessor,iVar5,HVar9,-1);
  lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffc0);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::L2CValue(aLStack240,_WEAPON_ANIMCMD_SOUND);
  lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,0x174934754f);
  iVar5 = lib::L2CValue::as_integer(aLStack240);
  HVar9 = lib::L2CValue::as_hash((L2CValue *)&stack0xffffffffffffffc0);
  app::lua_bind::MotionAnimcmdModule__call_script_single_impl
            (param_1->moduleAccessor,iVar5,HVar9,-1);
  lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffc0);
  lib::L2CValue::~L2CValue(aLStack240);
  return;
}

