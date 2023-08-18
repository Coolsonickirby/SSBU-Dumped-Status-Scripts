
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDonkey::status::ShoulderWait_main_loop(L2CFighterDonkey *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  Hash40 HVar7;
  L2CValue *this_00;
  float fVar8;
  float fVar9;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  FUN_7100022520(aLStack96,this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar1 & 1U) == 0) {
    FUN_7100023820(aLStack96,this);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar1 & 1U) == 0) {
      fVar8 = (float)app::lua_bind::ControlModule__get_stick_y_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack112,fVar8);
      lib::L2CValue::L2CValue(aLStack144,0x6e5ec7051);
      lib::L2CValue::L2CValue(aLStack160,0xc36694af0);
      uVar4 = lib::L2CValue::as_integer(aLStack144);
      uVar5 = lib::L2CValue::as_integer(aLStack160);
      fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack128,fVar8);
      uVar4 = lib::L2CValue::operator__(aLStack112,aLStack128);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack112);
LAB_71000244a4:
        this_00 = &this->globalTable;
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
        fVar8 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack128,fVar8);
        lib::L2CValue::operator_(pLVar6,aLStack128);
        lib::L2CValue::L2CValue(aLStack160,0x6e5ec7051);
        lib::L2CValue::L2CValue(aLStack176,0xcee0a3848);
        uVar4 = lib::L2CValue::as_integer(aLStack160);
        uVar5 = lib::L2CValue::as_integer(aLStack176);
        fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (this->moduleAccessor,uVar4,uVar5);
        lib::L2CValue::L2CValue(aLStack144,fVar8);
        uVar4 = lib::L2CValue::operator__(aLStack112,aLStack144);
        if ((uVar4 & 1) == 0) {
          uVar4 = 0;
        }
        else {
          pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
          uVar4 = lib::L2CValue::operator__(pLVar6,aLStack96);
          uVar4 = uVar4 & 0xffffffff;
          lib::L2CValue::_L2CValue(aLStack96);
        }
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((uVar4 & 1) == 0) {
          pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
          fVar8 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack128,fVar8);
          lib::L2CValue::operator_(pLVar6,aLStack128);
          lib::L2CValue::L2CValue(aLStack160,0x6e5ec7051);
          lib::L2CValue::L2CValue(aLStack176,0xcf44ba9e5);
          uVar4 = lib::L2CValue::as_integer(aLStack160);
          uVar5 = lib::L2CValue::as_integer(aLStack176);
          fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                   (this->moduleAccessor,uVar4,uVar5);
          lib::L2CValue::L2CValue(aLStack144,fVar8);
          uVar4 = lib::L2CValue::operator__(aLStack144,aLStack112);
          if ((uVar4 & 1) == 0) {
            uVar4 = 0;
          }
          else {
            pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
            lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
            uVar4 = lib::L2CValue::operator__(pLVar6,aLStack96);
            uVar4 = uVar4 & 0xffffffff;
            lib::L2CValue::_L2CValue(aLStack96);
          }
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((uVar4 & 1) == 0) {
            pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
            lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
            uVar4 = lib::L2CValue::operator__(pLVar6,aLStack96);
            lib::L2CValue::_L2CValue(aLStack96);
            if ((uVar4 & 1) == 0) {
              bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
              lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
              bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112);
              if ((bVar1 & 1U) == 0) {
                pLVar6 = aLStack112;
LAB_71000248d8:
                lib::L2CValue::_L2CValue(pLVar6);
              }
              else {
                HVar7 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
                lib::L2CValue::L2CValue(aLStack128,HVar7);
                lib::L2CValue::L2CValue(aLStack96,0xd62237786);
                uVar4 = lib::L2CValue::operator__(aLStack128,aLStack96);
                lib::L2CValue::_L2CValue(aLStack96);
                lib::L2CValue::_L2CValue(aLStack128);
                lib::L2CValue::_L2CValue(aLStack112);
                if ((uVar4 & 1) == 0) {
                  lib::L2CValue::L2CValue(aLStack96,0xd62237786);
                  lib::L2CValue::L2CValue(aLStack112,0.0);
                  lib::L2CValue::L2CValue(aLStack128,1.0);
                  lib::L2CValue::L2CValue(aLStack144,false);
                  HVar7 = lib::L2CValue::as_hash(aLStack96);
                  fVar8 = (float)lib::L2CValue::as_number(aLStack112);
                  fVar9 = (float)lib::L2CValue::as_number(aLStack128);
                  bVar2 = lib::L2CValue::as_bool(aLStack144);
                  app::lua_bind::MotionModule__change_motion_impl
                            (this->moduleAccessor,HVar7,fVar8,fVar9,(bool)(bVar2 & 1),0.0,false,
                             false);
                  lib::L2CValue::_L2CValue(aLStack144);
                  lib::L2CValue::_L2CValue(aLStack128);
                  lib::L2CValue::_L2CValue(aLStack112);
                  pLVar6 = aLStack96;
                  goto LAB_71000248d8;
                }
              }
              iVar3 = 0;
              goto LAB_7100024794;
            }
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DONKEY_STATUS_KIND_SHOULDER_FALL);
            lib::L2CValue::L2CValue(aLStack112,false);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
          }
          else {
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DONKEY_STATUS_KIND_SHOULDER_WALK);
            lib::L2CValue::L2CValue(aLStack112,true);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DONKEY_STATUS_KIND_SHOULDER_TURN);
          lib::L2CValue::L2CValue(aLStack112,true);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
        }
      }
      else {
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x1d);
        lib::L2CValue::L2CValue(aLStack192,0x6e5ec7051);
        lib::L2CValue::L2CValue(aLStack208,0xcec0a796f);
        uVar4 = lib::L2CValue::as_integer(aLStack192);
        uVar5 = lib::L2CValue::as_integer(aLStack208);
        iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
        lib::L2CValue::L2CValue(aLStack176,iVar3);
        uVar4 = lib::L2CValue::operator_(pLVar6,aLStack176);
        if ((uVar4 & 1) == 0) {
LAB_7100024430:
          bVar2 = 0;
        }
        else {
          pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
          lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
          uVar4 = lib::L2CValue::operator__(pLVar6,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar4 & 1) == 0) goto LAB_7100024430;
          bVar2 = app::lua_bind::GroundModule__is_passable_check_impl(this->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
        }
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((bVar2 & 1) == 0) goto LAB_71000244a4;
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DONKEY_STATUS_KIND_SHOULDER_PASS);
        lib::L2CValue::L2CValue(aLStack112,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
      }
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
    }
  }
  iVar3 = 1;
LAB_7100024794:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

