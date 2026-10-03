
void FUN_710002b270(L2CAgent *param_1,L2CValue *param_2,L2CValue *param_3)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  Hash40 HVar4;
  float fVar5;
  float fVar6;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,1.0);
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar3 = lib::L2CValue::operator==(param_3,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,0xee085517c);
    lib::L2CAgent::clear_lua_stack(param_1);
    lib::L2CAgent::push_lua_stack(param_1,aLStack80);
    app::sv_information::damage_log_value(param_1->luaStateAgent);
    lib::L2CAgent::pop_lua_stack(param_1,1);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    uVar3 = lib::L2CValue::operator<(aLStack80,aLStack112);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) {
      HVar4 = lib::L2CValue::as_hash(param_2);
      uVar2 = app::lua_bind::MotionModule__end_frame_from_hash_impl(param_1->moduleAccessor,HVar4);
      lib::L2CValue::L2CValue(aLStack80,uVar2);
      lib::L2CValue::operator/(aLStack80,aLStack112);
      lib::L2CValue::operator=(aLStack96,aLStack128);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack80);
    }
    lib::L2CValue::~L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::L2CValue(aLStack112,false);
  HVar4 = lib::L2CValue::as_hash(param_2);
  fVar5 = (float)lib::L2CValue::as_number(aLStack80);
  fVar6 = (float)lib::L2CValue::as_number(aLStack96);
  bVar1 = lib::L2CValue::as_bool(aLStack112);
  app::lua_bind::MotionModule__change_motion_impl
            (param_1->moduleAccessor,HVar4,fVar5,fVar6,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

