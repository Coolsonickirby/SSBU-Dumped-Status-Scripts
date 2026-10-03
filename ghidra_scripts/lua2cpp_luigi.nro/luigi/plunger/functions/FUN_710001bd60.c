
void FUN_710001bd60(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  fVar4 = (float)app::lua_bind::MotionModule__frame_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack64,fVar4);
  lib::L2CValue::L2CValue(aLStack48,0xd2dbabb56);
  lib::L2CValue::L2CValue(aLStack96,0x18979ba9d4);
  uVar2 = lib::L2CValue::as_integer(aLStack48);
  uVar3 = lib::L2CValue::as_integer(aLStack96);
  iVar1 = app::lua_bind::WorkModule__get_param_int_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::operator-(aLStack64,aLStack80);
  lib::L2CValue::operator=(aLStack64,aLStack48);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack48,1);
  uVar2 = lib::L2CValue::operator<(aLStack64,aLStack48);
  lib::L2CValue::~L2CValue(aLStack48);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack48,1);
    lib::L2CValue::operator=(aLStack64,aLStack48);
    lib::L2CValue::~L2CValue(aLStack48);
  }
  fVar4 = (float)lib::L2CValue::as_number(aLStack64);
  app::lua_bind::MotionModule__set_frame_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar4,true);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

