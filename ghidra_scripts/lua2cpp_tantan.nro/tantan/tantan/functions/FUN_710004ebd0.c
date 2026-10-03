
void FUN_710004ebd0(L2CValue *param_1,long param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5,L2CValue *param_6)

{
  ulong uVar1;
  Hash40 HVar2;
  bool bVar3;
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar1 = lib::L2CValue::operator==(param_3,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar1 & 1) == 0) {
    uVar1 = lib::L2CValue::operator==(param_4,param_6);
    if ((uVar1 & 1) == 0) goto LAB_710004ec80;
  }
  else {
    uVar1 = lib::L2CValue::operator==(param_4,param_5);
    if ((uVar1 & 1) == 0) {
LAB_710004ec80:
      bVar3 = false;
      goto LAB_710004ec88;
    }
    lib::L2CValue::operator=(param_5,param_6);
  }
  HVar2 = lib::L2CValue::as_hash(param_5);
  app::lua_bind::MotionModule__change_motion_inherit_frame_keep_rate_impl
            (*(BattleObjectModuleAccessor **)(param_2 + 0x40),HVar2,-1.0,1.0,0.0);
  bVar3 = true;
LAB_710004ec88:
  lib::L2CValue::L2CValue(param_1,bVar3);
  return;
}

