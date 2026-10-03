
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000a4e0(long param_1,L2CValue *param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0);
  lib::L2CValue::L2CValue(aLStack48,true);
  uVar2 = lib::L2CValue::operator==(param_2,aLStack48);
  lib::L2CValue::~L2CValue(aLStack48);
  if ((uVar2 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,0xb54dafbfb);
    lib::L2CValue::L2CValue(aLStack128,0xc145ff500);
    uVar2 = lib::L2CValue::as_integer(aLStack112);
    uVar3 = lib::L2CValue::as_integer(aLStack128);
    fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar2,uVar3);
    lib::L2CValue::L2CValue(aLStack96,fVar4);
    lib::L2CValue::L2CValue(aLStack48,10.0);
    lib::L2CValue::operator*(aLStack96,aLStack48);
    lib::L2CValue::~L2CValue(aLStack48);
    lib::L2CValue::operator=(aLStack64,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
  }
  fVar4 = (float)lib::L2CValue::as_number(aLStack64);
  app::lua_bind::ModelModule__set_depth_offset_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar4);
  lib::L2CValue::L2CValue(aLStack48,_WEAPON_LINK_NO_CONSTRAINT);
  iVar1 = lib::L2CValue::as_integer(aLStack48);
  fVar4 = (float)lib::L2CValue::as_number(aLStack64);
  app::lua_bind::LinkModule__set_node_depth_offset_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,fVar4);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

