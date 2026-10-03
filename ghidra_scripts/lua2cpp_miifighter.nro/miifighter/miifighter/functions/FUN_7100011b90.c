
void FUN_7100011b90(L2CValue *param_1,L2CValue *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  fVar1 = (float)lib::L2CValue::as_number(aLStack80);
  fVar2 = (float)lib::L2CValue::as_number(param_1);
  fVar3 = (float)lib::L2CValue::as_number(param_2);
  fVar4 = (float)lib::L2CValue::as_number(aLStack96);
  fVar5 = (float)lib::L2CValue::as_number(aLStack112);
  app::sv_camera_manager::set_user_offset(fVar1,fVar2,fVar3,fVar4,fVar5);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

