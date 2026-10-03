
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100013910(L2CValue *param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(param_1,false);
  lib::L2CValue::L2CValue(aLStack80,1.0);
  lib::L2CValue::L2CValue(aLStack112,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  fVar4 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack64,fVar4);
  fVar4 = (float)app::lua_bind::PostureModule__lr_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
  lib::L2CValue::L2CValue(aLStack128,fVar4);
  lib::L2CValue::operator*(aLStack64,aLStack128);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack64,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack128,0xcd16a7bf2);
  uVar2 = lib::L2CValue::as_integer(aLStack64);
  uVar3 = lib::L2CValue::as_integer(aLStack128);
  fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack112,fVar4);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack64);
  uVar2 = lib::L2CValue::operator<=(aLStack112,aLStack96);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack144,0x17f721e4e3);
    uVar2 = lib::L2CValue::as_integer(aLStack64);
    uVar3 = lib::L2CValue::as_integer(aLStack144);
    fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar2,uVar3);
    lib::L2CValue::L2CValue(aLStack128,fVar4);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::operator-(aLStack96,aLStack112);
    lib::L2CValue::operator-(aLStack128,aLStack112);
    lib::L2CValue::operator/(aLStack64,aLStack160);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack176,0x14a29ef8af);
    uVar2 = lib::L2CValue::as_integer(aLStack64);
    uVar3 = lib::L2CValue::as_integer(aLStack176);
    fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar2,uVar3);
    lib::L2CValue::L2CValue(aLStack160,fVar4);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,1.0);
    lib::L2CValue::operator-(aLStack160,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::operator*(aLStack208,aLStack144);
    lib::L2CValue::L2CValue(aLStack64,1.0);
    lib::L2CValue::operator+(aLStack64,aLStack192);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::operator=(aLStack80,aLStack176);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::L2CValue(aLStack64,true);
    lib::L2CValue::operator=(param_1,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
  }
  fVar4 = (float)lib::L2CValue::as_number(aLStack80);
  app::lua_bind::AttackModule__set_power_mul_status_impl
            (*(BattleObjectModuleAccessor **)(param_2 + 0x40),fVar4);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

