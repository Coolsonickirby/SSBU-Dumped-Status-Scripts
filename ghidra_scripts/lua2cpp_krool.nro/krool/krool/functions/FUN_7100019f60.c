
void FUN_7100019f60(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  L2CValue *this;
  float fVar3;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  this = aLStack80;
  lib::L2CValue::L2CValue(aLStack48,1.0);
  fVar3 = (float)lib::L2CValue::as_number(aLStack48);
  app::lua_bind::PostureModule__set_owner_scale_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar3);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack48,0x5ec462584);
  lib::L2CValue::L2CValue(aLStack80,0);
  uVar1 = lib::L2CValue::as_integer(aLStack48);
  uVar2 = lib::L2CValue::as_integer(aLStack80);
  fVar3 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar1,uVar2);
  lib::L2CValue::L2CValue(aLStack64,fVar3);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack48,0.0);
  uVar1 = lib::L2CValue::operator<(aLStack48,aLStack64);
  lib::L2CValue::~L2CValue(aLStack48);
  if ((uVar1 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack48,1.0);
    lib::L2CValue::operator=(aLStack64,aLStack48);
    this = aLStack48;
  }
  else {
    lib::L2CValue::L2CValue(aLStack48,1.0);
    lib::L2CValue::operator/(aLStack48,aLStack64);
    lib::L2CValue::~L2CValue(aLStack48);
    lib::L2CValue::operator=(aLStack64,aLStack80);
  }
  lib::L2CValue::~L2CValue(this);
  fVar3 = (float)lib::L2CValue::as_number(aLStack64);
  app::lua_bind::PostureModule__set_scale_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar3,false);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

