
void FUN_7100149930(L2CAgent *param_1,L2CValue *param_2)

{
  ulong uVar1;
  ulong uVar2;
  float fVar3;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::L2CValue(aLStack64,1);
  uVar1 = lib::L2CValue::operator==(param_2,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar1 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,2);
    uVar1 = lib::L2CValue::operator==(param_2,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar1 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,3);
      uVar1 = lib::L2CValue::operator==(param_2,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar1 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,4);
        uVar1 = lib::L2CValue::operator==(param_2,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar1 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack96,0xf899192aa);
          lib::L2CValue::L2CValue(aLStack112,0x1c82947aaf);
          uVar1 = lib::L2CValue::as_integer(aLStack96);
          uVar2 = lib::L2CValue::as_integer(aLStack112);
          fVar3 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                   (param_1->moduleAccessor,uVar1,uVar2);
          lib::L2CValue::L2CValue(aLStack64,fVar3);
          lib::L2CValue::operator=(aLStack80,aLStack64);
        }
        else {
          lib::L2CValue::L2CValue(aLStack96,0xf899192aa);
          lib::L2CValue::L2CValue(aLStack112,0x1c3b6fa147);
          uVar1 = lib::L2CValue::as_integer(aLStack96);
          uVar2 = lib::L2CValue::as_integer(aLStack112);
          fVar3 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                   (param_1->moduleAccessor,uVar1,uVar2);
          lib::L2CValue::L2CValue(aLStack64,fVar3);
          lib::L2CValue::operator=(aLStack80,aLStack64);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,0xf899192aa);
        lib::L2CValue::L2CValue(aLStack112,0x1ca06eae5d);
        uVar1 = lib::L2CValue::as_integer(aLStack96);
        uVar2 = lib::L2CValue::as_integer(aLStack112);
        fVar3 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (param_1->moduleAccessor,uVar1,uVar2);
        lib::L2CValue::L2CValue(aLStack64,fVar3);
        lib::L2CValue::operator=(aLStack80,aLStack64);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack112,0x1c199575b5);
      uVar1 = lib::L2CValue::as_integer(aLStack96);
      uVar2 = lib::L2CValue::as_integer(aLStack112);
      fVar3 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (param_1->moduleAccessor,uVar1,uVar2);
      lib::L2CValue::L2CValue(aLStack64,fVar3);
      lib::L2CValue::operator=(aLStack80,aLStack64);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack112,0x1c08e81fcc);
    uVar1 = lib::L2CValue::as_integer(aLStack96);
    uVar2 = lib::L2CValue::as_integer(aLStack112);
    fVar3 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (param_1->moduleAccessor,uVar1,uVar2);
    lib::L2CValue::L2CValue(aLStack64,fVar3);
    lib::L2CValue::operator=(aLStack80,aLStack64);
  }
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0xfce095390);
  lib::L2CValue::L2CValue(aLStack112,0);
  uVar1 = lib::L2CValue::as_integer(aLStack96);
  uVar2 = lib::L2CValue::as_integer(aLStack112);
  fVar3 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (param_1->moduleAccessor,uVar1,uVar2);
  lib::L2CValue::L2CValue(aLStack64,fVar3);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::operator*(aLStack80,aLStack64);
  lib::L2CValue::operator=(aLStack80,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack96);
  lib::L2CAgent::push_lua_stack(param_1,aLStack80);
  app::sv_kinetic_energy::set_speed(param_1->luaStateAgent);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

