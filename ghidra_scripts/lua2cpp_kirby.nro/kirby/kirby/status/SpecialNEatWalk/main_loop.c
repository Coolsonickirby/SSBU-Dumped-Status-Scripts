
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::SpecialNEatWalk_main_loop(L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue *this_00;
  bool bVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  float fVar6;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this_00 = &this->globalTable;
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
  uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    FUN_7100231e90(aLStack80,this);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar1 & 1U) == 0) {
      FUN_7100232bb0(aLStack80,this);
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((bVar1 & 1U) == 0) {
        pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
        fVar6 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack112,fVar6);
        lib::L2CValue::operator_(pLVar2,aLStack112);
        lib::L2CValue::L2CValue(aLStack144,0x6e5ec7051);
        lib::L2CValue::L2CValue(aLStack160,0xcf44ba9e5);
        uVar3 = lib::L2CValue::as_integer(aLStack144);
        uVar4 = lib::L2CValue::as_integer(aLStack160);
        fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (this->moduleAccessor,uVar3,uVar4);
        lib::L2CValue::L2CValue(aLStack128,fVar6);
        uVar3 = lib::L2CValue::operator_(aLStack96,aLStack128);
        if ((uVar3 & 1) == 0) {
          uVar3 = 0;
        }
        else {
          pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
          uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
          uVar3 = uVar3 & 0xffffffff;
          lib::L2CValue::_L2CValue(aLStack80);
        }
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar3 & 1) == 0) {
          FUN_7100230210(this);
          iVar5 = 0;
          goto LAB_71002329c0;
        }
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_N_EAT_WAIT);
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
        goto LAB_710023295c;
      }
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_N_EAT_FALL);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
LAB_710023295c:
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  iVar5 = 1;
LAB_71002329c0:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar5);
  return;
}

