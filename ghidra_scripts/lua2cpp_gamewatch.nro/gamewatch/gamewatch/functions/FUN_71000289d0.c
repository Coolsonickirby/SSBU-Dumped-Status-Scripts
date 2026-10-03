
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000289d0(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0);
  lib::L2CValue::L2CValue(aLStack48,_FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_FLOAT_SPECIAL_LW_GAUGE);
  iVar1 = lib::L2CValue::as_integer(aLStack48);
  fVar5 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack80,fVar5);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack48,3.0);
  uVar2 = lib::L2CValue::operator<=(aLStack48,aLStack80);
  lib::L2CValue::~L2CValue(aLStack48);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack48,2.0);
    uVar2 = lib::L2CValue::operator<=(aLStack48,aLStack80);
    lib::L2CValue::~L2CValue(aLStack48);
    if ((uVar2 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack48,1.0);
      uVar2 = lib::L2CValue::operator<=(aLStack48,aLStack80);
      lib::L2CValue::~L2CValue(aLStack48);
      if ((uVar2 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack48,0x8e9662ca0);
        lib::L2CValue::operator=(aLStack64,aLStack48);
      }
      else {
        lib::L2CValue::L2CValue(aLStack48,0x5b65edced);
        lib::L2CValue::operator=(aLStack64,aLStack48);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack48,0x52f578d57);
      lib::L2CValue::operator=(aLStack64,aLStack48);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack48,0x55850bdc1);
    lib::L2CValue::operator=(aLStack64,aLStack48);
  }
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack48,0x34cf1a892);
  lVar3 = lib::L2CValue::as_integer(aLStack48);
  lVar4 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::VisibilityModule__set_int64_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),lVar3,lVar4);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

