
void FUN_710002f4a0(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  float fVar4;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  fVar4 = (float)app::lua_bind::PostureModule__lr_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
  lib::L2CValue::L2CValue(aLStack64,fVar4);
  iVar2 = lib::L2CValue::as_integer(param_3);
  fVar4 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack80,fVar4);
  uVar3 = lib::L2CValue::operator==(aLStack64,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  bVar1 = (uVar3 & 1) == 0;
  if (bVar1) {
    app::lua_bind::PostureModule__reverse_lr_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40));
    app::lua_bind::PostureModule__update_rot_y_lr_impl
              (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
  }
  lib::L2CValue::L2CValue(param_1,(uint)bVar1);
  return;
}

