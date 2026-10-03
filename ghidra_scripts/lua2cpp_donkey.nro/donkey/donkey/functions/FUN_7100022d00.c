
void FUN_7100022d00(undefined8 param_1,L2CFighterCommon *param_2)

{
  byte bVar1;
  Hash40 HVar2;
  ulong uVar3;
  L2CValue *this;
  float fVar4;
  float fVar5;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0x1371e9e457);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack112,1.0);
  lib::L2CValue::L2CValue(aLStack128,false);
  HVar2 = lib::L2CValue::as_hash(aLStack80);
  fVar4 = (float)lib::L2CValue::as_number(aLStack96);
  fVar5 = (float)lib::L2CValue::as_number(aLStack112);
  bVar1 = lib::L2CValue::as_bool(aLStack128);
  app::lua_bind::MotionModule__change_motion_impl
            (param_2->moduleAccessor,HVar2,fVar4,fVar5,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  bVar1 = app::lua_bind::StopModule__is_stop_impl(param_2->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack160,false);
    FUN_7100022f30(aLStack144,param_2);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack160);
  }
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2->globalTable,0x15);
  lib::L2CValue::L2CValue(aLStack80,FUN_7100023150);
  lib::L2CValue::operator=(this,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack176,FUN_71000231b0);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(param_2,(L2CValue)0x50);
  lib::L2CValue::~L2CValue(aLStack176);
  return;
}

