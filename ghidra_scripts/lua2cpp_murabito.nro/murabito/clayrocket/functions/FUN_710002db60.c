
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710002db60(L2CAgent *param_1,L2CValue *param_2)

{
  uint uVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  Hash40 HVar4;
  float fVar5;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_1[2].battleObject,9);
  lib::L2CValue::L2CValue
            ((L2CValue *)&stack0xffffffffffffffc0,_WEAPON_MURABITO_CLAYROCKET_STATUS_KIND_FLY);
  uVar3 = lib::L2CValue::operator==(pLVar2,(L2CValue *)&stack0xffffffffffffffc0);
  lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffc0);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,800.0);
    lib::L2CValue::L2CValue(aLStack96,2.3);
    lib::L2CValue::L2CValue(aLStack112,1.65);
    lib::L2CValue::L2CValue(aLStack144,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
    lib::L2CAgent::clear_lua_stack(param_1);
    pLVar2 = aLStack144;
    lib::L2CAgent::push_lua_stack(param_1,pLVar2);
    fVar5 = (float)app::sv_kinetic_energy::get_speed_x(param_1->luaStateAgent);
    lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,fVar5);
    lib::L2CAgent::math_abs((L2CAgent *)&stack0xffffffffffffffc0,pLVar2);
    lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffc0);
    lib::L2CValue::~L2CValue(aLStack144);
    uVar3 = lib::L2CValue::operator<(aLStack96,aLStack128);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::operator=(aLStack128,aLStack96);
    }
    lib::L2CValue::operator-(aLStack128,aLStack112);
    lib::L2CValue::operator-(aLStack96,aLStack112);
    lib::L2CValue::operator/(aLStack160,aLStack176);
    lib::L2CValue::operator*((L2CValue *)&stack0xffffffffffffffc0,aLStack80);
    lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffc0);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,0.0);
    uVar3 = lib::L2CValue::operator<(aLStack144,(L2CValue *)&stack0xffffffffffffffc0);
    lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffc0);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,0.0);
      lib::L2CValue::operator=(aLStack144,(L2CValue *)&stack0xffffffffffffffc0);
      lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffc0);
    }
    lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,0);
    uVar3 = lib::L2CValue::operator<((L2CValue *)&stack0xffffffffffffffc0,param_2);
    lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffc0);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,0x1712a0cf98);
      HVar4 = lib::L2CValue::as_hash((L2CValue *)&stack0xffffffffffffffc0);
      fVar5 = (float)lib::L2CValue::as_number(aLStack144);
      app::lua_bind::SoundModule__set_se_pitch_cent_impl(param_1->moduleAccessor,HVar4,fVar5);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,0x1712a0cf98);
      HVar4 = lib::L2CValue::as_hash((L2CValue *)&stack0xffffffffffffffc0);
      uVar1 = lib::L2CValue::as_integer(param_2);
      app::lua_bind::SoundModule__stop_se_impl(param_1->moduleAccessor,HVar4,uVar1);
    }
    lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffc0);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  return;
}

