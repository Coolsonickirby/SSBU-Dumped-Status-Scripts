
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100044520(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  Hash40 HVar4;
  float fVar5;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0xf679aaf13);
  lib::L2CValue::L2CValue(aLStack80,0x13cf857354);
  uVar2 = lib::L2CValue::as_integer(aLStack64);
  uVar3 = lib::L2CValue::as_integer(aLStack80);
  fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack48,fVar5);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack80,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  fVar5 = (float)app::lua_bind::KineticModule__get_sum_speed_length_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack64,fVar5);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  fVar5 = (float)app::lua_bind::KineticModule__get_sum_speed_length_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack80,fVar5);
  uVar2 = lib::L2CValue::operator<(aLStack48,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,0x15195ae651);
    HVar4 = lib::L2CValue::as_hash(aLStack80);
    iVar1 = app::lua_bind::SoundModule__play_se_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar4,true,false,false,false
                       ,0);
    lib::L2CValue::L2CValue(aLStack112,iVar1);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack48);
  return;
}

