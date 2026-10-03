
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100039bd0(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  undefined8 *this;
  Hash40 HVar5;
  float fVar6;
  uint uVar7;
  long lVar8;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  undefined8 auStack160 [2];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  void **ppvStack64;
  lua_State *plStack56;
  
  lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,0x10de737e71);
  lib::L2CValue::L2CValue(aLStack96,0x13e95309ec);
  uVar2 = lib::L2CValue::as_integer((L2CValue *)&stack0xffffffffffffffc0);
  uVar3 = lib::L2CValue::as_integer(aLStack96);
  fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack80,fVar6);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffc0);
  lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,0x10de737e71);
  lib::L2CValue::L2CValue(aLStack112,0x12e5621604);
  uVar2 = lib::L2CValue::as_integer((L2CValue *)&stack0xffffffffffffffc0);
  uVar3 = lib::L2CValue::as_integer(aLStack112);
  fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack96,fVar6);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffc0);
  lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,0x10de737e71);
  lib::L2CValue::L2CValue(aLStack128,0xb7a7258c1);
  uVar2 = lib::L2CValue::as_integer((L2CValue *)&stack0xffffffffffffffc0);
  uVar3 = lib::L2CValue::as_integer(aLStack128);
  fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack112,fVar6);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffc0);
  lib::L2CValue::L2CValue(aLStack144,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  pLVar4 = (L2CValue *)lib::L2CValue::as_integer(aLStack144);
  fVar6 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(int)pLVar4);
  lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,fVar6);
  lib::L2CAgent::math_abs((L2CAgent *)&stack0xffffffffffffffc0,pLVar4);
  lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffc0);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  uVar2 = lib::L2CValue::operator<=(aLStack80,aLStack128);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::operator-(aLStack128,aLStack112);
    lib::L2CValue::operator-(aLStack80,aLStack112);
    lib::L2CValue::operator/((L2CValue *)auStack160,aLStack176);
    lib::L2CValue::operator=(aLStack144,(L2CValue *)&stack0xffffffffffffffc0);
    lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffc0);
    lib::L2CValue::~L2CValue(aLStack176);
    this = auStack160;
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,1.0);
    lib::L2CValue::operator=(aLStack144,(L2CValue *)&stack0xffffffffffffffc0);
    this = (undefined8 *)&stack0xffffffffffffffc0;
  }
  lib::L2CValue::~L2CValue((L2CValue *)this);
  lib::L2CValue::operator*(aLStack96,aLStack144);
  lib::L2CValue::operator=(aLStack96,(L2CValue *)&stack0xffffffffffffffc0);
  lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffc0);
  lib::L2CValue::L2CValue((L2CValue *)auStack160,0x42011d653);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  HVar5 = lib::L2CValue::as_hash((L2CValue *)auStack160);
  uVar2 = lib::L2CValue::as_number(aLStack96);
  lVar8 = lib::L2CValue::as_number(aLStack176);
  uVar7 = lib::L2CValue::as_number(aLStack192);
  ppvStack64 = (void **)(uVar2 & 0xffffffff | lVar8 << 0x20);
  plStack56 = (lua_State *)(ulong)uVar7;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar5,
             (Vector3f *)&stack0xffffffffffffffc0,0,0);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue((L2CValue *)auStack160);
  lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,0.0);
  lib::L2CValue::operator+(aLStack96,(L2CValue *)&stack0xffffffffffffffc0);
  lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffc0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&stack0xffffffffffffffc0,
             _WEAPON_PACKUN_BOSSPACKUN_STATUS_WORK_FLOAT_NECK_ROTATE_DEGREE);
  fVar6 = (float)lib::L2CValue::as_number((L2CValue *)auStack160);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&stack0xffffffffffffffc0);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar6,iVar1);
  lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffc0);
  lib::L2CValue::~L2CValue((L2CValue *)auStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

